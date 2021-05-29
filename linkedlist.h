#include "node.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H


class linkedlist{
    unsigned int size;
    node* tail;
    node* head;
    public:

    linkedlist() : head(nullptr), tail(nullptr), size(0) {}
    linkedlist(const linkedlist & src); //copy constructor
    ~linkedlist(); //delete all saved memory from the heap
    //create something that initiliazes the list
    void pushlist();
};

#endif