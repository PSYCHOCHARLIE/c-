#include <bits/stdc++.h> // dma for 2d arrays

using namespace std;

int main(){

    int n ; cin >> n;

    int **arr = new int*[n]; //  n = row
    for (int i = 0 ; i < n ; i++){   // n = row
        arr[i] = new int[n];   // n = col
    } // CREATION DONE


    //TAKING INPUT
    for (int i = 0 ; i < n ; i++){    // row
        for (int j = 0 ; j < n ; j++){    // column
            cin >> arr[i][j];
        }
    }


    //TAKING OUTPUT
    for (int i = 0 ; i < n ; i++){  // row
        for (int j = 0 ; j < n ; j++){  // col
            cout << arr[i][j];
        }
        cout << endl;
    }

    //RELEASING MEMORY

    for (int i = 0 ; i < n ; i++){
        delete [] arr[i];
    }

    delete []arr;





     
   

    return 0;
}

