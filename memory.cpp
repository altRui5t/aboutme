#include <QPainter>
#include <QPaintEvent>

#include "memory.h"

using namespace AboutMe;

Memory::Memory(QWidget *parent)
    : BaseEntity{parent}
{}

void Memory::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.fillRect(event->rect(), Qt::white);
    QWidget::paintEvent(event);
    painter.end();
}
