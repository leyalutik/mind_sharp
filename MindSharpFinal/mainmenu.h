#ifndef MAINMENU_H
#define MAINMENU_H

#include "ui_mainmenu.h"

#include<QMainWindow>
#include<QPainter>
#include<QPixmap>





class MainMenu: public QMainWindow
{
    Q_OBJECT
public:
    explicit MainMenu(QMainWindow *parent = nullptr);
    ~MainMenu();

protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void caller_start_play();
    void caller_exit();

private:
    QPixmap pixmap;


    Ui::MainMenu *ui;
};

#endif // MAINMENU_H
