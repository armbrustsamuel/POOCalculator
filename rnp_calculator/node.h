#ifndef NODE_H
#define NODE_H

#include <QString>

class node
{
private:
    QString value;
    node * previous;
    node * next;
public:
    node();
    QString Get();
    void Set(QString num);
    void SetNext(node *prox);
    void SetPrevious(node *last);
    node * GetNext();
    node * GetPrevious();
    ~node();
};

#endif // NODE_H
