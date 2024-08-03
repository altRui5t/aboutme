#ifndef WORKWINDOW_H
#define WORKWINDOW_H

#include <QWidget>
#include <QFrame>

class WorkWindow : public QFrame
{
    Q_OBJECT
public:
    explicit WorkWindow(QWidget *parent = nullptr);

signals:
};

#endif // WORKWINDOW_H
