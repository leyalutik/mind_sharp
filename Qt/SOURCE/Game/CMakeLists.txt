
# Указываем минимальную версию CMake
cmake_minimum_required(VERSION 3.5)

# Указываем имя проекта
project(MindSharpFinal)

# Указываем, какие модули Qt вам нужны
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(SOURCE_DIR ${CMAKE_SOURCE_DIR})

set(HEADERS_FILES
    game.h
    filemanager.h
    input.h
    output.h
    userdata.h
    expression.h
    timer.h)

# Указываем, что это библиотека
add_library(Game_Library
    game.cpp
    filemanager.cpp
    input.cpp
    output.cpp
    userdata.cpp
    expression.cpp
    timer.cpp
    ${HEADERS_FILES}
)

# Указываем, что библиотека требует C++17
target_compile_features(Game_Library PRIVATE cxx_std_17)

# Указываем директории для заголовочных файлов
target_include_directories(Game_Library PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    # Добавляем директории Qt
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Gui_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    # Добавляем директории Qt6
        ${Qt6Core_INCLUDE_DIRS}
        ${Qt6Gui_INCLUDE_DIRS}
        ${Qt6Widgets_INCLUDE_DIRS}

)



# Связываем библиотеки Qt с вашей библиотекой
target_link_libraries(Game_Library PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)


target_compile_definitions(Game_Library PRIVATE SOURCE_DIR="${SOURCE_DIR}")


