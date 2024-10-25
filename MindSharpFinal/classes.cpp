// Window

#include <QWidget>
#include <QPalette>

class MyWindow : public QWidget {
public:
    MyWindow(QWidget *parent = nullptr) : QWidget(parent) {
        setMinimumSize(300, 300);
        setMaximumSize(800, 800);
        setWindowTitle("MainWindow");
        // Установка фона окна
        setStyleSheet("QWidget {"
                      "background-image: url(:/images/rectangle.png);"
                      "background-repeat: no-repeat;"
                      "background-position: center;"
                      "border: none;"
                      "background-color: transparent; }");
    }
};


//MyButton

#include <QPushButton>

class MyButton : public QPushButton {
public:
    MyButton(const QString &text, QWidget *parent = nullptr) : QPushButton(text, parent) {
        setMaximumSize(16777215, 40); // Максимальный размер кнопки
        setStyleSheet("QPushButton {"
                      "background-image: url(:/images/button.png);"
                      "background-repeat: no-repeat;"
                      "background-position: center;"
                      "color: black;"
                      "font-size: 16px; }");
    }
};


//myLabel

#include <QLabel>

class MyLabel : public QLabel {
public:
    MyLabel(const QString &text, QWidget *parent = nullptr) : QLabel(text, parent) {
        setAlignment(Qt::AlignCenter); // Центрирование текста
        setStyleSheet("QLabel {"
                      "background-image: url(:/images/title.png);"
                      "background-repeat: no-repeat;"
                      "background-position: center;"
                      "color: black;"
                      "font-size: 16px; }");
    }
};


//myLineEdit

#include <QLineEdit>

class MyLineEdit : public QLineEdit {
public:
    MyLineEdit(QWidget *parent = nullptr) : QLineEdit(parent) {
        setMaximumSize(16777215, 60); // Максимальный размер для ввода текста
        setStyleSheet("QLineEdit {"
                      "background-image: url(:/images/button.png);"
                      "background-repeat: no-repeat;"
                      "background-position: center;"
                      "color: black;"
                      "font-size: 16px; }");
    }
};



/*
  MyWindow *window = new MyWindow();
MyButton *button = new MyButton("Exit");
MyLabel *label = new MyLabel("Mind Sharp");
MyLineEdit *input = new MyLineEdit();

*/

//MyVLayout

#include <QVBoxLayout>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>

class MyVBoxLayout : public QVBoxLayout {
public:
    MyVBoxLayout(QWidget *parent = nullptr) : QVBoxLayout(parent) {
        setSizeConstraint(QLayout::SetDefaultConstraint);

        // Создаем QLabel с заданными настройками
        QLabel *infoLabel = new QLabel("TextLabel");
        infoLabel->setMaximumSize(16777215, 60);
        infoLabel->setAlignment(Qt::AlignCenter);
        infoLabel->setStyleSheet("QLabel {"
                                 "background-image: url(:/images/button.png);"
                                 "background-repeat: no-repeat;"
                                 "background-position: center;"
                                 "color: black;"
                                 "font-size: 16px; }");

        // Создаем QLineEdit с заданными настройками
        QLineEdit *inputLine = new QLineEdit();
        inputLine->setMaximumSize(16777215, 60);
        inputLine->setStyleSheet("QLineEdit {"
                                 "background-image: url(:/images/button.png);"
                                 "background-repeat: no-repeat;"
                                 "background-position: center;"
                                 "color: black;"
                                 "font-size: 16px; }");

        // Добавляем виджеты в вертикальный layout
        addWidget(infoLabel);
        addWidget(inputLine);
    }
};

/*

MyVBoxLayout *vLayout = new MyVBoxLayout();
QWidget *container = new QWidget();
container->setLayout(vLayout);
 */
