#include <bits/stdc++.h>

using namespace std;

bool bs(int *arr ,int s, int e , int k ){ 
    
    if (s > e)
      return false;
      
    int mid = s + (e-s)/2;
    
    if (arr[mid] == k)
      return true;
    
    if(arr[mid] < k)
    return bs(arr,mid+1,e,k);
    
    else
    return bs(arr,s,mid-1,k);
    
    
}

int main(){
    
    
    int arr1[6] = {2,4,6,10,14,16};
    int key = 14;
    int size = 6;
    int end = 5;
    
   
    int b = bs(arr1, 0, 5, key);
    cout << b << endl;
    
    return 0;
}