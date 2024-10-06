#include <bits/stdc++.h>
using namespace std;

#define PI 3.14   // macros

inline int getmax(int a , int b){ // inline works only when code is of 1 line & its a req to compiler not command
    return (a>b)? a : b;
}

void print (int arr[] , int size = 0 , int start = 0){ // DEFAULT start = 0
    for (int i = start; i < size ; i++){// default value starts from right only
        cout << arr[i]<< endl;
    }
}



int main(){

    // int a = 5 , b = 6;
    // int ans = 0 ;
    // ans = getmax(a,b); // if inline is used this getmax(a,b) gets replaced by return (a>b)? a : b; automatically
    // cout << ans << endl;
    // return 0;


    int arr[5] = {1,2,3,4,5};
    int size = 5;
    print(arr,size); // if we don't pass start it will take default start = 0

}

