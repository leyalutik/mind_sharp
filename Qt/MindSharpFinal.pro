# Указываем, что используем модуль Widgets
QT += widgets

# Устанавливаем стандарт C++17
CONFIG += c++17

# Включаем автоматическую генерацию MOC, UIC и RCC (обычно включено по умолчанию)
# Не требуется дополнительной настройки в qmake

# Указываем исходные файлы проекта
SOURCES += \
    main.cpp \
    mainmenu.cpp \
    menu_start_play.cpp \
    # Добавьте остальные исходные файлы

HEADERS += \
    mainmenu.h \
    menu_start_play.h \
    # Добавьте остальные заголовочные файлы

FORMS += \
    mainmenu.ui \
    menu_start_play.ui \
    # Добавьте остальные UI-файлы

RESOURCES += resourses.qrc

# Добавляем подкаталог с библиотекой Game_Library
SUBDIRS += SOURCE/Game

# Если вам нужно определить макрос SOURCE_DIR
DEFINES += SOURCE_DIR=\\\"$$PWD\\\"

# Специальные настройки для WebAssembly
load(qt_config)

# Проверяем, что сборка выполняется для WebAssembly
contains(QT_CONFIG, wasm): {
    CONFIG += wasm

    # Общие флаги для компилятора и линковщика
    QMAKE_CXXFLAGS += -s WASM=1 -s USE_WEBGL2=1 -s FETCH=1
    QMAKE_LFLAGS += -s WASM=1 -s USE_WEBGL2=1 -s FETCH=1

    # Флаги для режима отладки
    debug {
        QMAKE_CXXFLAGS += -g4 -s ASSERTIONS=2 -s DEMANGLE_SUPPORT=1
    }

    # Устанавливаем суффикс исполняемого файла
    TARGET = MindSharpFinal.html
} else {
    # Настройки для других платформ, если необходимо
}

# Подключение библиотеки Game_Library (если она является статической библиотекой)
LIBS += -L$$PWD/SOURCE/Game -lGame_Library

# Добавляем пути к заголовочным файлам библиотеки Game_Library
INCLUDEPATH += $$PWD/SOURCE/Game
DEPENDPATH += $$PWD/SOURCE/Game

