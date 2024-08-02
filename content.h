#ifndef CONTENT_H
#define CONTENT_H

#include <QWidget>
#include <QString>

#include "baseentity.h"

namespace AboutMe {


class Content : public BaseEntity
{
    Q_OBJECT
public:
    explicit Content(QWidget *parent = nullptr);

private:
    QString path_;
    QString type_;


signals:
};

}
#endif // CONTENT_H
