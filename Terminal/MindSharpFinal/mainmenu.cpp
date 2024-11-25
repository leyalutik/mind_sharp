#include "mainmenu.h"
#include "menu_start_play.h"
#include <QApplication>
#include<QResizeEvent>
#include <QGraphicsDropShadowEffect>
#include <QScreen>
#include <QVBoxLayout>
#include <QMainWindow>

MainMenu::MainMenu(QMainWindow *parent)
    : QMainWindow(parent), ui(new Ui::MainMenu)
{

    //setWindowFlags(Qt::FramelessWindowHint);
    // Получаем указатель на экран
    QScreen *screen = QGuiApplication::primaryScreen();

    // Получаем доступную геометрию экрана
    QRect screenGeometry = screen->availableGeometry();

    // Устанавливаем размер окна (например, 80% от ширины и высоты экрана)
    int width = static_cast<int>(screenGeometry.width() * 0.4);
    int height = static_cast<int>(screenGeometry.height() * 0.5);
    this->resize(width, height);

    // Центрируем окно на экране
    this->move((screenGeometry.width() - width) / 2, (screenGeometry.height() - height) / 2);

    ui->setupUi(this); //Установка интерфейса

    // Устанавливаем стиль окна без заголовка

    //title


    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadow4 = new QGraphicsDropShadowEffect(this);
    shadow4->setBlurRadius(20);
    shadow4->setOffset(5, 5);
    shadow4->setColor(Qt::black);
    ui->title->setGraphicsEffect(shadow4); // Применяем тень к первой кнопке

    ui->title->setAlignment(Qt::AlignCenter); // Выравнивание по центру


    // Кнопка "Start play"

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadow1 = new QGraphicsDropShadowEffect(this);
    shadow1->setBlurRadius(20);
    shadow1->setOffset(5, 5);
    shadow1->setColor(Qt::black);
    ui->start_play->setGraphicsEffect(shadow1); // Применяем тень к первой кнопке


    connect(ui->start_play, &QPushButton::clicked, this, &MainMenu::caller_start_play);

    // Кнопка "Exit"


    // Применяем тень к кнопке
    QGraphicsDropShadowEffect *shadow2 = new QGraphicsDropShadowEffect(this);
    shadow2->setBlurRadius(20);
    shadow2->setOffset(5, 5);
    shadow2->setColor(Qt::black);
    ui->exit->setGraphicsEffect(shadow2); // Применяем тень ко второй кнопке


    connect(ui->exit, &QPushButton::clicked, this, &MainMenu::caller_exit);


}

void MainMenu::paintEvent(QPaintEvent *event)
{



    QPainter painter(this);
    painter.fillRect(rect(), Qt::white);

    pixmap.load("rectangle.png");
    if (!pixmap.isNull()) {
        // Установим отступы (например, по 10% от ширины и высоты)
        int marginX = width() * 0.05;  // Отступ по горизонтали
        int marginY = height() * 0.1; // Отступ по вертикали

        // Масштабируем изображение с учётом отступов
        QPixmap scaledPixmap = pixmap.scaled(width() - 2 * marginX, height() - 2 * marginY, Qt::KeepAspectRatio, Qt::SmoothTransformation);

        // Центрируем изображение с учётом отступов
        int x = (width() - scaledPixmap.width()) / 2;
        int y = (height() - scaledPixmap.height()) / 2;

        // Задаем параметры тени
        int shadowOffset = 5;
        QRect pixmapRect = QRect((width() - scaledPixmap.width()) / 2,
                                 (height() - scaledPixmap.height()) / 2,
                                 scaledPixmap.width(), scaledPixmap.height());

        // Рисуем тень
        painter.setPen(Qt::NoPen);
        painter.setBrush(QColor(0, 0, 0, 150));  // Полупрозрачный черный цвет для тени
        painter.drawRect(pixmapRect.translated(shadowOffset, shadowOffset));


        // Рисуем изображение
        painter.drawPixmap(x, y, scaledPixmap);
    } else {
        painter.drawText(100, 100, "The picture is not found");
    }
}

void MainMenu::resizeEvent(QResizeEvent *event) {
    QSize windowSize = event->size();

    // Пропорционально устанавливаем расстояние между кнопками относительно высоты окна
    int buttonSpacing = windowSize.height() * 0.2;  // 5% от высоты окна
    int margins = windowSize.height() * 0.02;        // 2% от высоты окна для отступов

    // Устанавливаем пропорциональные отступы от краёв окна
    /*QVBoxLayout *vlayout = qobject_cast<QVBoxLayout*>(layout());
    if (vlayout) {
        vlayout->setSpacing(buttonSpacing);                // Установка расстояния между кнопками
        vlayout->setContentsMargins(margins, margins, margins, margins); // Установка отступов
    }

    // Пропорционально уменьшаем/увеличиваем размер кнопок относительно окна
    int buttonWidth = windowSize.width() * 0.4;  // 40% ширины окна
    int buttonHeight = windowSize.height() * 0.1; // 10% высоты окна

    ui->start_play->setFixedSize(buttonWidth, buttonHeight);
    ui->exit->setFixedSize(buttonWidth, buttonHeight);
*/
    QWidget::resizeEvent(event); // Вызов стандартного обработчика
}


void MainMenu::caller_start_play()
{
    // Создаем и открываем новое окно


    MenuStartPlay *menu_start_play = new MenuStartPlay();
    menu_start_play->show();

    // Скрываем текущее окно
    this->hide();
}

void MainMenu::caller_exit()
{
    QApplication::exit();
}

MainMenu::~MainMenu()
{
    delete ui;
}


#include "mainmenu.moc"
