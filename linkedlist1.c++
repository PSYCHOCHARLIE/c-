#include <bits/stdc++.h>
using namespace std;
// insertion/ deletion is easy
// easy to use & can be changed at run time
// no memory wastage
// stored in heap memory as can be changed on runtime

class node {

    public:
    int data;     // data is used to store an integer value in each node
    node* next;   // next is a pointer to the next node in a linked list.

    node(int data){ // cons doesn't return anything
        this -> data = data ;
        this -> next = NULL;
        cout << " this stores the address of the current node " << this << endl;
    }
};

int main(){

    cout<<endl<<endl<<endl<<"CREATING A SINGLE LINKED LIST OF VALUE 10 AND POINTER ZERO" << endl;

    // dynamically allocating (OOPS - 1)
    node* node1 = new node(10); //  it declares a pointer to a node named node1. constructor called

    cout << node1 -> data << " or " << (*node1).data << endl;

    cout << node1 -> next << endl;

    cout << " address of this node1 " << &node1 << endl ; 

    return 0;
}







