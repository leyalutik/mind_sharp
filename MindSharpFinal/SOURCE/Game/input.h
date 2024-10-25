#ifndef INPUT_H
#define INPNUT_H


#include<QObject>
#include<QLineEdit>
#include<QString>
#include <QMessageBox>


#include<string>
#include<cstdint>


class Input
{

public:
	Input(QLineEdit *stream, QObject *parent = nullptr);

	Input();
	int32_t get_text_as_int();

private:
	QLineEdit *lineEdit;

};










#endif
