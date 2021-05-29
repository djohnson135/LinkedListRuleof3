#include "linkedlist.h"

//this is going to be a doubly linked list and not the typical one
// I used template typename in the creation of this list

int main(){
    linkedlist ll;
    // linkedlist ff;
    ll.push_front(20);
    ll.push_front(234);
    ll.push_front(64);
    ll.push_front(36);
    ll.printlist();
    ll.clear();
    ll.returnsize();
    ll.printlist();
    ll.push_front(216);
    ll.push_front(84);
    ll.push_front(1);
    ll.push_front(93);
    ll.push_front(76);
    ll.printlist();
    // //copy constructor test
    linkedlist gg(ll);
    gg.printlist();


    //test
    //copy assingment operator test
    // ll = ff;
    
}