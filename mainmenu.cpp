#include "mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QMenuBar{parent}
{
    this->addMenu(tr("Файл"));
    this->addMenu(tr("Настройки"));
    this->addMenu(tr("Таймлайн"));
    this->addMenu(tr("Воспоминание"));
    this->addMenu(tr("Контент"));
    this->addMenu(tr("Группировать"));
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
}
