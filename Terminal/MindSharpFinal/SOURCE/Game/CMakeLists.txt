
# Указываем минимальную версию CMake
cmake_minimum_required(VERSION 3.5)

# Указываем имя проекта
project(MindSharpFinal)

# Указываем, какие модули Qt вам нужны
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)


# Указываем, что это библиотека
add_library(Game_Library
    game.cpp
    filemanager.cpp
    input.cpp
    output.cpp
    userdata.cpp
    expression.cpp
    timer.cpp
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
)



# Связываем библиотеки Qt с вашей библиотекой
target_link_libraries(Game_Library Qt5::Core Qt5::Gui Qt5::Widgets)


