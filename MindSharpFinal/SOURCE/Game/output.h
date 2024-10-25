#ifndef OUTPUT_H
#define OUTPUT_H


#include<QObject>
#include<QLabel>
#include<string>


class Output
{

public:
	Output(QLabel *stream, QObject *parent = nullptr);

	Output();

	void display();

	std::string string_line;

private:
	QLabel *stream;

};










#endif
