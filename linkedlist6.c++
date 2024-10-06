#include <bits/stdc++.h>  // remove duplicate from sorted linked list
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data;
        this->next = NULL;
    }
};


    node * uniquesortedlist (node* head){
        // empty list
        if(head == NULL){
            return NULL;
        }

        // non- empty list
        node*current = head;

        while(current != NULL){

            if((current -> next != NULL) && (current->data == current->next->data)){  // kahin next null to nahi hai
                node* next_next = current->next->next; // creating a pointer to next to next node
                node* nodetodelete = current -> next;  // creating a pointer to delete current ka next if equal
                delete(nodetodelete);
                current->next = next_next;
            }

            else{  // not equal
                current = current -> next;
            }

        }

        return head;
    }







