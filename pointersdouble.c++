#include <bits/stdc++.h>
using namespace std;
int main(){

    int i = 5;
    int *p = &i;
    int**p2 = &p;
    cout << &p <<"  p2 is pointing towards address of p = &p " << p2 << endl;
    cout << endl << p <<"  p is pointing address of i therefore p = &i  "<< &i<<endl;
    cout <<" *p2 means value of p and value of p is the address of i "<<*p2 <<endl;

    cout << i << endl << *p << endl << **p2<<endl;
    cout << &i << endl << p << endl << *p2 << endl;
    
     return 0;
}




