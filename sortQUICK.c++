#include <bits/stdc++.h>

using namespace std;
// take first element as pivot
// count all elements less than pivot
// pivot se small ele left me and greater wale right me
// then swap pivot with the count of less elements



int partition(int arr[] , int s , int e){
    int pivot = arr[s]; // pivot is the first element
    int count = 0;
    // now counting elements less than pivot
    for (int i = s+1 ; i <= e ; i++){
        if(arr[i] <= pivot)
        count ++;
    }
    
    // now placing pivot at the right position coz 
    // count is the numbers less than pivot
    
    int pivotIndex = s + count ;   // ****************************BUG*******************************  :)
    swap(arr[pivotIndex], arr[s]); // placing pivot at the right position
    
    // left and right wale part ko krte hain ab
    int i = s , j = e;
    
    while (i < pivotIndex && j > pivotIndex){
        
        while(arr[i] < pivot){ // pivot se chhote wale left me rahenge
            i++;
        }
        while(arr[j] > pivot){ // pivot se bade wale right me rahenge
            j--;
        }
        
        if (i < pivotIndex && j > pivotIndex){// writg the cond again just to chk
        // try on paper for better understanding eg : 4,6,10,5,2
        swap(arr[i++], arr[j--]);
        }
    }
    
    return pivotIndex;
    
}


void quicksort(int arr[], int s, int e){
    
    if (s >= e)
    return ;
    
    // partition karenge
    int p = partition(arr,s,e); 
    
    // left part sort karo
    quicksort(arr,s,p-1);
    
    // right part sort karo
    quicksort(arr, p+1, e);
    
}


int main(){
    
    int arr[5] = {2,4,1,6,9};
    int  n= 5;
    
    quicksort(arr,0,n-1);
    
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    } cout << endl;
    
    return 0;
}







