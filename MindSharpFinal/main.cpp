#include "mainmenu.h"
#include "menu_start_play.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainMenu w;
    //w.resize(400,300);
    w.show();
    return a.exec();
}



