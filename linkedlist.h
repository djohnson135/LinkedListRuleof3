#include "node.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H


class linkedlist{
    unsigned int size;
    node* tail;
    node* head;
    public:
    linkedlist() : head(nullptr), tail(nullptr), size(0) {} //default constructor

    linkedlist(const linkedlist & src); //copy constructor
    ~linkedlist(); //delete all saved memory from the heap this is the destructor
    linkedlist & operator=(const linkedlist & src); //copy assignment operator
    unsigned int returnsize() const {return size;}
    int frontdata() const {return head->data;}
    int backdata() const {return tail->data;}
    void push_back(int);
    void push_front(int);
    void pop_front(int);
    void pop_back(int);
    void erase(unsigned int indx);
    void insert(int data, unsigned int indx);
    void clear();

};

linkedlist::~linkedlist(){ //destrucor
    //delete all memory stored on the heap
    node* delnode = nullptr;
    while (head != nullptr){
        delnode = head;
        head = head->next;
        delete delnode;
    }
    head = nullptr;
    tail = nullptr;
    size = 0;
}
    

linkedlist::linkedlist(const linkedlist & src){

}

linkedlist & linkedlist::operator=(const linkedlist & src){
    return *this;
}
#endif