#ifndef MEMORY_H
#define MEMORY_H

#include <QWidget>
#include <QUuid>

namespace AboutMe {

class Memory : public QWidget
{
    Q_OBJECT
public:
    explicit Memory(QWidget *parent = nullptr);

signals:
};

}
#endif // MEMORY_H
