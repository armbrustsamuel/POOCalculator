#include "node.h"

node::node()
{

}

QString node::Get(){
    return value;
}

void node::Set(QString num){
    value = num;
}

void node::SetNext(node *prox){
    next = prox;
}

void node::SetPrevious(node *ant){
    previous = ant;
}

node * node::GetNext(){
    return next;
}

node * node::GetPrevious(){
    return previous;
}

node::~node(){
    next = NULL;
    previous = NULL;
}
