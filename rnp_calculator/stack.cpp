#include "stack.h"

stack::stack()
{
    head = NULL;
}

void stack::insertNew(double str){
    node *percorre, *no;
    no = new node;

    if (no == NULL){
        cout << "cheia" << endl;
    }
    else {
       no->Set(str);
       if(head == NULL){
           no->SetNext(head);
           head = no;
       }
       else {
           for(percorre = head ;((percorre->GetNext() != NULL)); percorre = percorre->GetNext()){}
               percorre->SetNext(no);
               no->SetNext(NULL);
       }
    }
}

node * stack::getLast(){
    node *percorre, *no;
    if(head == NULL){
        cout << "vazia" << endl;
    }
    else{
        if(head->GetNext() == NULL){
            delete head;
            head = NULL;
        }
        else{
            for(percorre = head;(((percorre->GetNext())->GetNext()) != NULL); percorre = percorre->GetNext()){
//                cout << percorre->Get() << endl;
            }
                return percorre->GetNext();
        }
    }
}

void stack::removeNew(){
    node *percorre, *no;
    if(head == NULL){
        cout << "vazia" << endl;
    }
    else{
        if(head->GetNext() == NULL){
            delete head;
            head = NULL;
        }
        else{
            for(percorre = head;(((percorre->GetNext())->GetNext()) != NULL); percorre = percorre->GetNext()){}
                no = percorre->GetNext();
                percorre->SetNext(NULL);
                delete no;
        }
    }
}


