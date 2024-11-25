#ifndef MENU_START_PLAY_H
#define MENU_START_PLAY_H

#include "ui_menu_start_play.h"
#include <QWidget>



#include "SOURCE/Game/userdata.h"
#include "SOURCE/Game/filemanager.h"
#include "SOURCE/Game/input.h"
#include "SOURCE/Game/output.h"
#include "SOURCE/Game/expression.h"
#include "SOURCE/Game/timer.h"
#include "SOURCE/Game/game.h"

#include <QApplication>
#include<QWidget>
#include<QResizeEvent>
#include <QGraphicsDropShadowEffect>
#include <QScreen>
#include <QVBoxLayout>
#include <QWindow>

#include<vector>
#include <string>

namespace Ui
{
class MenuStartPlay;
}

class MenuStartPlay : public QWidget
{
    Q_OBJECT

public:
    explicit MenuStartPlay(QWidget *parent = nullptr);
    ~MenuStartPlay();

    Input* in;
    Output* out;
    FileManager* f;


protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;


public slots:
    void play();

private slots:
    void caller_back();

private:
    QPixmap pixmap;
    Ui::MenuStartPlay *ui;
};

#endif // MENU_START_PLAY__H
