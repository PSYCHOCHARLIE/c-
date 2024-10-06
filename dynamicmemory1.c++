#include <bits/stdc++.h>
using namespace std;

void update(int& n){ // reference variable
    n++;  
}

int getsum (int* arr , int n ){
    int sum = 0;
    for ( int i = 0 ; i < n ; i++){
        sum = sum + *(arr + i);
    }
    return sum;
}


int main(){
    /*
    int i = 5; 

    int& j = i;  // create new reference variable connecting  i and j

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    */

//    int n = 5;
//    cout << "before" << n << endl;
//    update(n);
//    cout << "after" << n << endl;




// Heap ke paas bahut saara space pada hai aur usko "new" keyword se access krenge
// when using static memory called "STATIC MEMORY ALLOCATION" & for using heap memory "DYNAMIC MEMORY ALLOCATION"

    int n ; 
    cin >> n; 

    int*arr = new int[n]; // creating dma for array & pointer used to access address returned by new of int

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int ans = getsum(arr,n);

    cout << "SUM IS = " << ans << endl;

    // delete i for single element deletion
    // delete []arr for array deletion manually 

    return 0;
}



// while (true){     // memory will be keep allocating again and again and will crash the compiler
//        int *ptr = new int; // memory will not be freed automatically
//    }

