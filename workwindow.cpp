#include "workwindow.h"


WorkWindow::WorkWindow(QWidget *parent)
    : QFrame{parent}
{
    this->setFrameShape(QFrame::Shape::Box);
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}
