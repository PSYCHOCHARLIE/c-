#include <bits/stdc++.h>
using namespace std;
bool sort(int *arr , int size ){ // ckh if array is sorted
    if (size <= 1) // base case
    return true;
    
    if (arr[0] > arr[1])
    return false;
    
    else
    return sort(arr + 1,size-1); // pointers concept
}


bool LinearSearch(int *arr1 , int size1 , int key ){
    if (size1 <= 1 && arr1[size1] != key) // base case  OR if (size == 0)
    return false;
    
    if (arr1[0] == key)
    return true;
    
    else
    return LinearSearch(arr1 + 1,size1 - 1, key);
  
}

int main(){
    // Sorting

    int arr[5] = {1,2,3,6,5};
    
    int size = 5;
   
    bool a = sort(arr,size);
    
    cout << "sorting wala- " <<  a <<endl ;


    // Linear Search
    int arr1[5] = {1,2,3,6,5};
    
    int size1 = 5;
    int key = 8;
   
    bool b = LinearSearch(arr1, size1, key);
    
    cout << "linear Search wala- "<< b << endl;



    
   

    return 0;
}

