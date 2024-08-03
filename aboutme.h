#ifndef ABOUTME_H
#define ABOUTME_H

#include <QMainWindow>
#include "mainmenu.h"
#include "timelinecolon.h"
#include "workwindow.h"
#include "datebar.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class aboutme;
}
QT_END_NAMESPACE

class aboutme : public QMainWindow
{
    Q_OBJECT

public:
    aboutme(QWidget *parent = nullptr);
    ~aboutme();

private:
    MainMenu menu_;
    TimelineColon timelineColon_;
    WorkWindow workWindow_;
    DateBar dateBar_;
    Ui::aboutme *ui;
};
#endif // ABOUTME_H
