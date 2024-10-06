#include<bits/stdc++.h>// pointer is used to store the address
using namespace std ; // pointer cannot point to zero coz 0 memory donot exist

int main(){

    int num = 5;
    cout <<"address of num = " << &num << endl;
    int *ptr = &num; // storing address
    cout << "address using pointer ="<<ptr << endl;     
    cout <<"print value =" <<*ptr << endl;   
    
    cout <<"size of interger="<<sizeof(num)<<endl;
    cout <<"size of pointer= "<<sizeof(ptr)<<endl;// in some cases 8 coz of compiler
    cout << (*ptr)++ << endl; // *ptr = *ptr + 1
    cout << "*ptr = "<<  *ptr << endl << "num ="<< num << endl ;

    ptr = ptr + 1;
    cout <<ptr <<" 4 byte aage badh jayega coz int 4 byte ka hota hai" << *ptr<< endl;

    // copying a pointer
    int *q = ptr;
    cout << ptr << " - "<< q << endl;
    cout << *ptr << " - "<<*q <<endl;

    // second way to initialise

    int a = 9;
    int *p = 0; // first *p is intialise to zero  
    p = &a ;    // do not use * again in p if p is first initialised to 0


    char ch = 'a';
    char *z = &ch; // storing address of char
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}