#ifndef TIMELINE_H
#define TIMELINE_H

#include <map>

#include <QWidget>
#include <QDate>
#include <QString>
#include <QPaintEvent>

#include "memory.h"

namespace AboutMe{

class TimeLine : public QWidget
{
    Q_OBJECT
public:
    explicit TimeLine(QWidget *parent = nullptr);

    void SetStartDate(const QDate&);
    const QDate& GetStartDate() const;

    void SetEndDate(const QDate&);
    const QDate& GetEndDate() const;

    void SetUuid(const QUuid&);
    const QUuid& GetUuid() const;

    void SetName(const QString&);
    const QString& GetName() const;

    void AddMemory(const AboutMe::Memory&);
    const AboutMe::Memory& GetMemory(const QDate&, const QUuid&) const;
    const std::multimap<QDate, AboutMe::Memory>& GetAllMemories() const;


    void DeleteMemory(const QDate&, const QUuid&);
    AboutMe::Memory&& MoveMemory(const QDate&, const QUuid&);

    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    std::multimap <QDate, AboutMe::Memory> data_;

    QDate start_;
    QDate end_;

    QString name_;
    QUuid uuid_;
signals:
};

}
#endif // TIMELINE_H
