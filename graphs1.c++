#include<bits/stdc++.h> 
# include <unordered_map>
# include <list>

using namespace std;

// using adjacency list

class graph {

    public:
        //            nodes, edges
        unordered_map<int, list<int> > adj; //  list: efficient insertions and deletions in the middle of the sequence
// in unordered_map<int,bool> -> values defaults to false for any keys that haven’t been assigned a value yet.


        void addedge(int u, int v, bool direction){
            // direction = 0 -> undirected graph
            // direction = 1 -> directed graph
            
            // create an edge from u -> v 
            adj[u].push_back(v); // means that for the key u (node), the value v (list) is added to its corresponding list in the adjacency list.

            if (direction == 0){ // phir to u -> v bhi possible hai
                adj[v].push_back(u);
            }
        }

        void printadjlist(){
            for (auto i : adj){
                cout << i.first << "->";
                for (auto j : i.second){
                    cout << j << ",";
                }
                cout << endl;
            }
        }
};



int main(){

    int n ;
    cout << "enter the number of nodes";
    cin >> n;

    int m ; 
    cout << "enter the number of edges" << endl;
    cin >> m;

    graph g;

    for (int i = 0 ; i < m ; i++){
        int u, v;
        cin >> u>> v;
        g.addedge(u,v, 0);
    }

    // printing graph
    g.printadjlist();




    return 0;
}