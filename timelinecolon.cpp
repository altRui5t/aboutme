#include "timelinecolon.h"

TimelineColon::TimelineColon(QWidget *parent)
    : QListWidget{parent}
{
    this->addItem("Тест");
    this->addItem("Тест2");
    this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);

}
