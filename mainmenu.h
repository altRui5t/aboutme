#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include <QMenuBar>

class MainMenu : public QMenuBar
{
    Q_OBJECT
public:
    explicit MainMenu(QWidget *parent = nullptr);

signals:
};

#endif // MAINMENU_H
