#include <bits/stdc++.h>
using namespace std;

// Terminal node - last node
// Trie can have many children

class TrieNode{
    public:
    char data; 
    TrieNode* children[26]; // are the nodes of the trie
    bool isterminal; // mark the last node

    // constructor 
    TrieNode(char ch){
        this -> data = ch;

        for (int i = 0; i < 26; i++){
            children[i] = NULL; // in starting there are no children to the root node
        }
        isterminal = false; // and hence there is no last node
    }
};

class trie{
    public:
    TrieNode* root; 

    trie(){
        // root parent node is being created
        root = new TrieNode('\0');
    }

    void insertutil(TrieNode* root, string word){

        // basecase
        if(word.length() == 0){ // inserted all characters
            root -> isterminal = true; // setting last char as terminal node    
            return;
        }

        // converting into capital
        int index = word[0] - 'A';
        TrieNode* child; // used to iterate over the children

        // present - if the word[0] is present
        if (root -> children[index] != NULL){
            child = root -> children[index];
        }

        else{
            // absent 
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }

        // recursion
        insertutil(child, word.substr(1)); // "hello", then word.substr(1) will return the substring "ello".
    }

    void insertword(string word){ // O(l) where l -> length of word 
        insertutil(root, word);
    }


// SEARCHING
    bool searchutil(TrieNode* root, string word){
        // base case
        if (word.length() == 0){
            return root -> isterminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        // present
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            // absent
            return false;
        }

        // Recursion
        return searchutil(child, word.substr(1));
    }


    bool searchword(string word){
        return searchutil(root, word);
    }
};


int main(){

    trie *t = new trie();

    t -> insertword("ABCD");

    cout << "Present or not " << t-> searchword("ABC") << endl;
    
    return 0;
}