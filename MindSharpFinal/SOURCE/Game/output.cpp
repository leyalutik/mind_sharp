#include "output.h"



Output::Output(QLabel* value, QObject* parent) : QObject(parent), stream(value) {}


void Output::display()
{

	 stream -> setText(QString::fromStdString(string_line));

}
