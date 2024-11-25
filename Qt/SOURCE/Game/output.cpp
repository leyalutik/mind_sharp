#include "output.h"

Output::Output(QLabel* value, QWidget* parent):
    QWidget(parent), qLabel(value)
{
    qLabel->setWordWrap(true);
    qLabel->setText("Do the tasks quickly as you can.\nDon't care of mistakes!");
}

void Output::adjustFontSizeToLabel()
{
    int labelHeight = qLabel->height();
    int labelWidth = qLabel->width();
    int fontSize = qLabel->font().pointSize();

    QFont font = qLabel->font();
    QFontMetrics fontMetrics(font);
    QRect boundingRect = fontMetrics.boundingRect(qLabel->rect(), Qt::TextWordWrap, qLabel->text());

    while (((boundingRect.width() > labelWidth) || (boundingRect.height() > labelHeight)) && (fontSize > 1)) {
        fontSize -= 1;
        font.setPointSize(fontSize);
        fontMetrics = QFontMetrics(font);
        boundingRect = fontMetrics.boundingRect(qLabel->rect(), Qt::TextWordWrap, qLabel->text());
        //qDebug() << "Размер шрифта:" << fontSize << "Ширина текста:" << boundingRect.width() << "Высота текста:" << boundingRect.height();
    }


    // Применяем обновленный шрифт к QLabel
    qLabel->setFont(font);
}

void Output::show()
{
    qLabel->setText(QString::fromStdString(text));
    adjustFontSizeToLabel();
}

void Output::expression_show(const std::string& text_value)
{
    qLabel->setText(QString::fromStdString(text_value));
    adjustFontSizeToLabel();
}

void Output::resizeEvent(QResizeEvent* event)
{
    adjustFontSizeToLabel();
    QWidget::resizeEvent(event);
}
