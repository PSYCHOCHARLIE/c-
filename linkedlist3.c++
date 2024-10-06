#include <bits/stdc++.h>   // Doubly LL
using namespace std; 

class node{
    public:
    int data;
    node* prev;
    node* next;

    // 
    node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~node(){
        int value = this -> data;
        if (next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memeory free for node with data "<< value << endl;
    }
};

// Traversing a linked list
void print(node* head){
    
    node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// Gives length of the linked list
int getlength(node* head){
    int length = 0;
    node* temp = head;

    while(temp != NULL){
        length++;
        temp = temp -> next;
    }
    return length;
}

// Insert before the main node
void insertathead(node* &head, int d){
    
    // making a new node
    node* temp = new node(d); // head stores the address of the current node or name of the curr node
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

// Insert after the main node
void insertattail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;  //tail = name of the current node or stores the address of the curr node
    temp -> prev = tail;
    tail = temp;

}

// Insert at position
void insertatposition(node* &tail, node* &head, int position, int d){

    // Insert at Start
    if (position == 1){
        insertathead(head, d);
        return;
    }

    node* temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    // Inserting at last position
    if(temp -> next == NULL){
        insertattail(tail, d);
        return ;
    }

    // Creating a node for value d
    node* nodetoinsert = new node(d);

    nodetoinsert -> next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;


}

// delete at position
void deletenode(int position, node* &head){

    // delete first or start node
    if (position == 1){
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        
        // deleting any middle node or last node
        node* current = head;
        node* prev = NULL;
         
        int count = 1;
        while(count < position){
            prev = current;
            current = current -> next;
            count++ ;
        } 

        current -> prev = NULL;
        prev -> next = current -> next;
        current -> next = NULL;
        delete current;
}
}

int main(){

    node* node1 = new node(10);      
    node* head = node1;
    node* tail = node1;
    print(head);

    cout << getlength(head) << endl;

    // insertathead(head, 11);
    // print(head);

    // insertattail(tail,25);
    // print(head);

    // insertatposition(tail,head, 2 , 100);
    // print(head);    

    // deletenode(1, head);
    // print(head);

    // deletenode(2, head);
    // print(head);
    
    return 0;
}








