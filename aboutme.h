#ifndef ABOUTME_H
#define ABOUTME_H

#include <QMainWindow>

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
    Ui::aboutme *ui;
};
#endif // ABOUTME_H
