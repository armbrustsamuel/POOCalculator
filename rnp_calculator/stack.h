#include <QString>
#include "node.h"
#include <iostream>

using namespace std;

// LIFO - Last-In -> First-out
// Insere no fim/Retira do fim

#ifndef STACK_H
#define STACK_H

#define OK 0
#define VAZIA 1
#define CHEIA 2

class stack
{
private:
    node *head;
public:
    stack();
    node * getHead();
    void insertNew(double str);
    void removeNew();
    node * getLast();
//    void print();
};

#endif // STACK_H
