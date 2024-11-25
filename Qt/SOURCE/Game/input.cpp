#include "input.h"


Input::Input(QLineEdit* value, QWidget* parent) :
    QWidget(parent),lineEdit(value)
{


}







void Input::process_int_input()
{
    QEventLoop loop;

    // Подключаем сигнал editingFinished к слоту loop.quit() один раз
    connect(lineEdit, &QLineEdit::editingFinished, &loop, &QEventLoop::quit);

    // Активируем поле ввода и устанавливаем на него фокус
    lineEdit->setEnabled(true);
    lineEdit->setFocus();

    // Запускаем вложенный цикл событий; выполнение остановится здесь, пока не будет вызван loop.quit()
    loop.exec();

    // Отключаем сигнал, чтобы избежать множественных подключений при повторных вызовах функции
    disconnect(lineEdit, &QLineEdit::editingFinished, &loop, &QEventLoop::quit);

    // Обрабатываем ввод пользователя после выхода из цикла
    bool ok;
    int value = lineEdit->text().toInt(&ok);
    if (ok)
    {
        int_data = value;
        lineEdit->clear();
    }
    else
    {
        lineEdit->clear();
        int_data = 0;
        // Здесь можно добавить обратную связь для пользователя
    }

    // Деактивируем поле ввода
    lineEdit->setEnabled(false);

}

//#include "input.moc"
