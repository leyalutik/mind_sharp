cmake_minimum_required(VERSION 3.5)

project(MindSharpFinal VERSION 0.1 LANGUAGES CXX)


if("${CMAKE_SYSTEM_NAME}" STREQUAL "wasm-emscripten")
    set(CMAKE_EXECUTABLE_SUFFIX ".html")
    set(Qt5_DIR "/home/leyalutik/Qt/5.15.2/wasm_32/lib/cmake/Qt5")
    set(CMAKE_PREFIX_PATH "/home/leyalutik/Qt/5.15.2/wasm_32/lib/cmake")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug) # Или Release, в зависимости от того, что вам нужно


find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# Добавляем подкаталог с библиотекой Game_Library
add_subdirectory(SOURCE/Game)

set(PROJECT_SOURCES
        main.cpp
        mainmenu.cpp
        menu_start_play.cpp

)

set(HEADERS
    mainmenu.h
    menu_start_play.h
)

set(UI_FILES
    mainmenu.ui
    menu_start_play.ui
)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)


set(SOURCE_DIR ${CMAKE_SOURCE_DIR})



if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(MindSharpFinal
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        ${UI_HEADERS}
        ${HEADERS}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET MindSharpFinal APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(MindSharpFinal SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(MindSharpFinal
            ${PROJECT_SOURCES}
            ${HEADERS}
            ${UI_FILES}
            resourses.qrc
            menu_start_play.h menu_start_play.cpp menu_start_play.ui
        )
    endif()
endif()


# Список общих опций для компилятора и линковщика
set(EMCC_COMMON_FLAGS
    "-s WASM=1"
    "-s FULL_ES2=1"
    "-s FULL_ES3=1"
    "-s USE_WEBGL2=1"
    "-s EXIT_RUNTIME=1"
    "-s ERROR_ON_UNDEFINED_SYMBOLS=1"
    "-s EXTRA_EXPORTED_RUNTIME_METHODS=[\"UTF16ToString\",\"stringToUTF16\"]"
    "--bind"
    "-s FETCH=1"
)

# Специальные опции для режима отладки
set(EMCC_DEBUG_FLAGS
    "-s ASSERTIONS=2"
    "-s DEMANGLE_SUPPORT=1"
    "-s GL_DEBUG=1"
    "--profiling-funcs"
    "-g4"
)

# Опции для асинхронности (если требуется)
# Установите переменную ENABLE_ASYNCIFY в ON, если вам нужно использовать asyncify
option(ENABLE_ASYNCIFY "Enable Emscripten Asyncify" OFF)

if(ENABLE_ASYNCIFY)
    add_compile_definitions(QT_HAVE_EMSCRIPTEN_ASYNCIFY)
    list(APPEND EMCC_COMMON_FLAGS "-s ASYNCIFY")
    # Рекомендуется использовать оптимизацию при включенном ASYNCIFY
    set(CMAKE_CXX_FLAGS_RELEASE "-O2 ${CMAKE_CXX_FLAGS_RELEASE}")
    set(CMAKE_CXX_FLAGS_DEBUG "-Os ${CMAKE_CXX_FLAGS_DEBUG}")
endif()

# Настройка для Emscripten/WebAssembly
if("${CMAKE_SYSTEM_NAME}" STREQUAL "Emscripten")
    # Устанавливаем компиляторы
    set(CMAKE_C_COMPILER "emcc")
    set(CMAKE_CXX_COMPILER "em++")

    # Добавляем общие опции компилятора и линковщика
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${EMCC_COMMON_FLAGS}")
    set(CMAKE_LINK_OPTIONS "${CMAKE_LINK_OPTIONS} ${EMCC_COMMON_FLAGS}")

    # Добавляем отладочные опции в режиме Debug
    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${EMCC_DEBUG_FLAGS}")
        set(CMAKE_LINK_OPTIONS "${CMAKE_LINK_OPTIONS} ${EMCC_DEBUG_FLAGS}")
    endif()

    # Устанавливаем суффикс исполняемого файла
    set(CMAKE_EXECUTABLE_SUFFIX ".html")
endif()

target_link_libraries(MindSharpFinal PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
    Game_Library)

target_compile_definitions(MindSharpFinal PRIVATE SOURCE_DIR="${SOURCE_DIR}")



# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.MindSharpFinal)
endif()
set_target_properties(MindSharpFinal PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS MindSharpFinal
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(MindSharpFinal)
endif()


