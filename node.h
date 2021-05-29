#ifndef NODE_H
#define NODE_H


// template <typename T>

struct node{
    node(int data): data(data), next(nullptr), prev(nullptr){}
    node* next;
    node* prev; 
    int data;
};


#endif