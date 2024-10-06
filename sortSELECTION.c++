//pehle element ko baaki saare se compare karo jo chotha hai usko usko pehli position pe leke aajao bas yahi hai
// space complexity o(1) and time o(n^2)
// used when size of array is small works from left to right
#include <bits/stdc++.h> 
using namespace std ;
void selectionSort(vector<int>& arr, int n)
{  
   
    
    for ( int i = 0 ; i < n-1  ; i++){

        for ( int j = i+1 ; j < n ; j++ ){

            if (arr[i] > arr[j]){
                
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; // u can also use swap function but it takes more time 
            }
        }
        
    }
}