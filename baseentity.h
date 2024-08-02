#ifndef BASEENTITY_H
#define BASEENTITY_H

#include <QWidget>
#include <QUuid>
#include <QDate>
#include <QString>
#include <QColor>
namespace AboutMe
{
class BaseEntity : public QWidget
{
    Q_OBJECT
public:
    explicit BaseEntity(QWidget *parent = nullptr);

    void SetStartDate(const QDate&);
    const QDate& GetStartDate() const;

    void SetEndDate(const QDate&);
    const QDate& GetEndDate() const;

    void SetUuid(const QUuid&);
    const QUuid& GetUuid() const;

    void SetName(const QString&);
    const QString& GetName() const;

    void SetBgColor(const QColor&);
    const QColor& GetBgColor() const;

    void SetTextColor(const QColor&);
    const QColor& GetTextColor() const;


private:

    QDate start_;
    QDate end_;

    QString name_;
    QUuid uuid_;

    QColor bgColor_;
    QColor textColor_;

signals:
};
}
#endif // BASEENTITY_H
