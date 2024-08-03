#include <QVBoxLayout>
#include <QHBoxLayout>

#include "aboutme.h"
#include "ui_aboutme.h"

aboutme::aboutme(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::aboutme)
{
    ui->setupUi(this);

    QWidget* widget = new QWidget;
    this->setCentralWidget(widget);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(5, 5, 5, 5);
    QHBoxLayout *timelineLayout = new QHBoxLayout;
    timelineLayout->setContentsMargins(5, 5, 5, 5);
    QVBoxLayout *dateLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(5, 5, 5, 5);


    mainLayout->addWidget(&menu_);
    timelineLayout->addWidget(&timelineColon_);
    dateLayout->addWidget(&dateBar_);
    dateLayout->addWidget(&workWindow_);

    timelineLayout->addLayout(dateLayout);
    mainLayout->addLayout(timelineLayout);
    widget->setLayout(mainLayout);

}

aboutme::~aboutme()
{
    delete ui;
}
