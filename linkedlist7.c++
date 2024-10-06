#include <bits/stdc++.h>  // sort 0s , 1s, and 2ws
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

Node* sortList(Node *head){
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

    Node* temp = head;

    while(temp != NULL){   //  COUNTING NUMBER OF ZEROS, ONES AND TWOS AND STORING IN THE REFRENCE VARIABLE

        if (temp -> data == 0){
            zerocount++;
        }

        else if(temp->data == 1){
            onecount++;
        }

        else if(temp->data ==2){
            twocount++;
        }

        temp  =  temp -> next;
    }


    temp = head;  // again initialising temp to the first position

    while(temp != NULL){   // NOW MAKING A NODE OF THE STORED VALUES

        if (zerocount != 0){
            temp -> data = 0;
            zerocount--;
        }

        else if (onecount != 0){
            temp -> data = 1;
            onecount--;
        }

        else if (twocount != 0){
            temp -> data =2;
            twocount--;
        }

        temp = temp -> next;

    }

    return head;
}


//   SECOND APPROACH TO SOLVE THE SAME QUESTION
//   MAKE 3 TYPES OF LINKED LIST OF 0 1 2 AND THEN MERGE THEM TOGETHER


void insertattail(Node* &tail, Node* current){
    tail -> next = current;
    tail = current;
}
Node* sortList(Node* head){
    Node* zerohead = new Node(-1);
    Node* zerotail = zerohead;

    Node* onehead = new Node(-1);
    Node* onetail = onehead;

    Node* twohead = new Node(-1);
    Node* twotail = twohead;


    Node* current = head;  // current pointing to the first node

    while(current != NULL){  // creating seperate list of 0 1 & 2

        int value = current -> data;

        if (value == 0){
            insertattail(zerotail, current);
        }

        else if (value == 1){
            insertattail(onetail, current);
        }

        else if (value == 2){
            insertattail(twotail, current);
        }

        current = current -> next;
    }

    //  NOW MERGING THE 3 SEPERATE LIST

    // if one list is not empty
    if (onehead != NULL){
        zerotail -> next = onehead -> next;
    }

    else{ // one list is empty
    zerotail -> next = twohead -> next;
    }

    onetail -> next = twohead -> next;  // these 3 steps are the merge statements
    twotail -> next = NULL;

    //  BRINGING HEAD TO THE FIRST POSITION and deleting dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
}



// MERGE 2 SORTED LINKED LIST

// Node<int>* solve (Node<int>*first, Node<int>*second){

//       // if only 1 element is present in the first linked list
//     if (first -> next == NULL){
//         first -> next = second;
//         return first;
//     }

//     Node<int>* current1 = first;
//     Node<int>* next1 = current1 -> next;
//     Node<int>* current2 = second;
//     Node<int>* next2 = current2 -> next;



//     //  MUST CHK THAT NEXT1 AND CURRENT2 ARE NOT NULL   
//     // can also write for current1 but no need think
//     while(next1 != NULL && current2 != NULL){

//         // if the second node lies between the first two datas of the linked list
//         if (current2->data >= current1->data && current2->data <= next1->data) {

//           current1->next = current2;
//           next2 = current2->next; // keeping record of second ll
//           current2->next = next1;
//           // updating
//           current1 = current2;
//           current2 = next2;
//         }

//         // if it doesn't lie between them or is greater then we need to update
//         // the current1 details
//         else {

//           current1 = next1;
//           next1 = next1->next;

//           // if next1 == NULL

//           if (next1 == NULL) {
//             current1->next = current2;
//             return first;
//           }
//         }
//     }

//     return first;
// }

// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
    
//     if (first == NULL){
//         return second;
//     }

//     if (second == NULL){
//         return first;
//     }

//     //  jis ll ka pehla data small hoga usko first ll maan lenge

//     if (first -> data <= second -> data){
//         return solve(first, second);  
//     }

//     else {
//         return solve(second, first); // second ka data bada hai to usko first maan liya
//     }

// }
