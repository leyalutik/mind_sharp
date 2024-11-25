#include "menu_start_play.h"
#include "mainmenu.h"



    MenuStartPlay::MenuStartPlay(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::MenuStartPlay)
    {
        ui->setupUi(this);

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


     // Создаем тень для объектов
    std::vector<QGraphicsDropShadowEffect* > shadows;
    int32_t N = 5;
    for(size_t i=0; i<5; ++i)
    {
        QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
        shadow->setBlurRadius(20);
        shadow->setOffset(5, 5);
        shadow->setColor(Qt::black);
        shadows.push_back(shadow);
    }
    ui->title->setGraphicsEffect(shadows[0]); // Применяем тень к первой кнопке
    ui->title->setAlignment(Qt::AlignCenter); // Выравнивание по центру
    ui->info->setGraphicsEffect(shadows[1]); // Применяем тень к первой кнопке
    ui->run->setGraphicsEffect(shadows[2]); // Применяем тень к первой кнопке
    ui->back->setGraphicsEffect(shadows[3]); // Применяем тень ко второй кнопке
    ui->input->setGraphicsEffect(shadows[4]); // Применяем тень ко второй кнопке





    connect(ui->back, &QPushButton::clicked, this, &MenuStartPlay::caller_back);

    connect(ui->run, &QPushButton::clicked, this, &MenuStartPlay::play);

    in = new Input(ui->input, this);
    out = new Output(ui->info, this);
    f =  new FileManager(this);

}

void MenuStartPlay::paintEvent(QPaintEvent *event)
{



    QPainter painter(this);
    painter.fillRect(rect(), Qt::white);

   /* pixmap.load("rectangle.png");
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
*/
}

void MenuStartPlay::resizeEvent(QResizeEvent *event)
{
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
void MenuStartPlay::caller_back()
{
    // Создаем и открываем новое окно
    MainMenu *mainmenu = new MainMenu();
    mainmenu->show();

    // Скрываем текущее окно
    this->hide();
}



MenuStartPlay::~MenuStartPlay()
{

    delete f;
    delete ui;

}

void MenuStartPlay::play()
{


    std::string name_user;
    std::string user_name_file = std::string(SOURCE_DIR)
                                 + std::string("/user_name.txt");
    f->set_read_file(user_name_file);
    f->read_user_name(name_user);

    PlayGame game(name_user,in, out, f, this);

    game.play_game();




}

#include "menu_start_play.moc"
