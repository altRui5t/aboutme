#include <QPainter>

#include "timeline.h"

namespace AboutMe{

TimeLine::TimeLine(QWidget *parent)
    : QWidget{parent}
{}

void TimeLine::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.fillRect(event->rect(), Qt::white);
    QWidget::paintEvent(event);
    painter.end();
}

}
