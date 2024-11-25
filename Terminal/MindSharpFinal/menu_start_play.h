#ifndef MENU_START_PLAY_H
#define MENU_START_PLAY_H

#include "ui_menu_start_play.h"
#include <QWidget>

namespace Ui {
class MenuStartPlay;
}

class MenuStartPlay : public QWidget
{
    Q_OBJECT

public:
    explicit MenuStartPlay(QWidget *parent = nullptr);
    ~MenuStartPlay();

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
