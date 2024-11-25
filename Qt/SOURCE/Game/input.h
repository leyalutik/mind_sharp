#ifndef INPUT_H
#define INPUT_H




#include <QString>
#include <QMessageBox>
#include <QApplication>
#include <QLineEdit>
#include <QWidget>
#include <exception>
#include <QDebug>
#include <QInputDialog>
#include <QEventLoop>
#include <QTimer>

#include<string>
#include<cstdint>


class Input : public QWidget
{

    Q_OBJECT
public:
    explicit Input(QLineEdit *value, QWidget *parent = nullptr);

    void process_int_input();

    int32_t int_data = 0;
    std::string text;
    QLineEdit *lineEdit;





private:



};



#endif
