#include "datebar.h"

DateBar::DateBar(QWidget *parent)
    : QFrame{parent}
{
    this->setFrameShape(QFrame::Shape::Box);
    this->setLineWidth(5);
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);

}
