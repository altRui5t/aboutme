#ifndef MEMORY_H
#define MEMORY_H

#include <QWidget>
#include <list>


#include "content.h"

namespace AboutMe {

class Memory : public BaseEntity
{
    Q_OBJECT
public:
    explicit Memory(QWidget *parent = nullptr);

    void AddContent(const AboutMe::Content&);
    const AboutMe::Content& GetContent(const QUuid&) const;
    const std::list<AboutMe::Content>& GetAllContents() const;

    void DeleteContent(const QUuid&);
    AboutMe::Content&& MoveContent(const QUuid&);

    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
private:
    std::list<AboutMe::Content> data_;
signals:
};

}
#endif // MEMORY_H
