#include "node.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>


class linkedlist{
    unsigned int size;
    node* tail;
    node* head;
    public:
    linkedlist() : head(nullptr), tail(nullptr), size(0) {} //default constructor
    // linkedlist(unsigned int data) : size(data) {}
    linkedlist(const linkedlist & src); //copy constructor
    ~linkedlist(); //delete all saved memory from the heap this is the destructor
    linkedlist & operator=(const linkedlist & src); //copy assignment operator
    unsigned int returnsize() const {std::cout << size << std::endl; return size; }
    int frontdata() const {return head->data;}
    int backdata() const {return tail->data;}
    void push_back(int);
    void push_front(int);
    void pop_front(int);
    void pop_back(int);
    void printlist();
    void erase(unsigned int indx);
    void insert(int data, unsigned int indx);
    void clear();//same function as the destructor

};

linkedlist::~linkedlist(){ //destrucor
    //delete all memory stored on the heap
    clear();
}
    

linkedlist::linkedlist(const linkedlist & src){
    //copy the linked list!!
    if (src.head == nullptr){
        head = tail = nullptr;
        size = 0; // maybe use this->size
    } else{
        //copy the list from src
        node* srcCurr = src.head;
        node* previous = nullptr; 
        head = nullptr;
        while(srcCurr != nullptr){
            node* newnode = new node(srcCurr->data);
            if (head == nullptr){
                head = newnode;
                newnode->prev = nullptr;
            } else{
                previous->next = newnode;
                newnode ->prev = previous;
            }
            previous = newnode;
            srcCurr = srcCurr -> next;
        }
        tail = previous;
        tail->next = nullptr;
        size = src.size;
    }


}

linkedlist & linkedlist::operator=(const linkedlist & src){
    return *this;
}





void linkedlist::printlist(){
    node * curr = head;
    while(curr != nullptr){
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

void linkedlist::push_front(int data){
    if (head == nullptr){
        head = new node(data);
        tail = head;
        head -> next = nullptr;
        head -> prev = nullptr;
    }
    else {
        node* newnode = new node(data);
        tail -> next = newnode;
        newnode->prev = tail;
        newnode->next = nullptr;
        tail = newnode;
    }
}




void linkedlist::clear(){
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
#endif