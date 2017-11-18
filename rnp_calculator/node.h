#ifndef NODE_H
#define NODE_H

#include <QString>

using namespace std;

class node
{
private:
    double value;
    node * previous;
    node * next;
public:
    node();
    int Get();
    void Set(double num);
    void SetNext(node *prox);
    void SetPrevious(node *last);
    node * GetNext();
    node * GetPrevious();
    ~node();
};

#endif // NODE_H
