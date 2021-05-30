#include "linkedlist.h"

//this is going to be a doubly linked list and not the typical one
// I used template typename in the creation of this list

int main(){
    linkedlist ll;
    // linkedlist ff;
    ll.push_back(20);
    ll.push_back(234);
    ll.push_back(64);
    ll.push_back(36);
    ll.printlist();
    linkedlist ff(ll);
    // ll.clear();
    ll.returnsize();
    ll.printlist();
    ll.pop_front();
    ll.printlist();
    ll.push_back(216);
    
    ll.push_back(84);
    ll.push_back(1);
    ll.push_back(93);
    ll.push_back(76);
    ll.printlist();
    // //copy constructor test
    linkedlist gg(ll);
    gg.printlist();

    
    //test
    //copy assingment operator test
    ll = ff;
    ll.printlist();
}