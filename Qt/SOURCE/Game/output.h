#ifndef OUTPUT_H
#define OUTPUT_H


#include<QWidget>
#include<QLabel>
#include<string>
#include <QLabel>
#include <QFontMetrics>
#include <QResizeEvent>
#include <QRect>


class Output : public QWidget
{

     Q_OBJECT
public:
    explicit Output(QLabel *qLabel, QWidget *parent = nullptr);

	Output();


    void show();
    void expression_show(const std::string& text_value);

    //текст под размер подгоняет
    void adjustFontSizeToLabel();

    void resizeEvent(QResizeEvent* event);

    std::string text;
    int32_t int_data = 0;

signals:


    void emit_expression_show();

private:
    QLabel *qLabel;

};



#endif
