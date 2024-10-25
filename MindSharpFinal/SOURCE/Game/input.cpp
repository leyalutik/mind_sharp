#include "input.h"



Input::Input(QLineEdit* value, QObject* parent) : QObject(parent), lineEdit(value) {}


int32_t Input::get_text_as_int()
{

	int32_t result = 0;
	bool valid = false;

	while(!valid)
	{
	std::string text  = lineEdit->text().toStdString();

	result = std::stoi(text);
	valid = true;

	catch (const std::invalid_argument& )
	{
		 qWarning("Введено нечисловое значение. Повторите попытку.");
                QMessageBox::warning(nullptr, "Ошибка", "Введите числовое значение.");
                
                // Очищаем поле ввода для повторного ввода
                lineEdit->clear();
                
                // Блокируем выполнение до нового ввода пользователя
                lineEdit->setFocus();  
                lineEdit->repaint();  // Обновляем интерфейс, если требуется
                qApp->processEvents();  // Обновляем интерфейс и ждем ввода
           

	}

	catch (const std::out_of_range& )
	{
		// Если значение выходит за границы int32_t
		qWarning("Введенное значение вне допустимого диапазона для int32_t. Повторите попытку.");
		QMessageBox::warning(nullptr, "Ошибка", "Значение вне допустимого диапазона. Попробуйте еще раз.");

		lineEdit->clear();
		lineEdit->setFocus();
		lineEdit->repaint();
		qApp->processEvents();

	}

	}

	return result;

}
