#include "node.h"

node::node()
{
    next = NULL;
    previous = NULL;
}

int node::Get(){
    return value;
}

void node::Set(double num){
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
