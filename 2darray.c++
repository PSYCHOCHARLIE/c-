#include <iostream>// the key . is either we can send both 3 and 4 in defined function or only 4 like here in 2d array

using namespace std;

void process2DArray(int a[][4], int numRows, int numCols) {
    // Code to work with a 2D array
    for (int i = 0; i < numRows; i++) {     // exchange i and j to start from column to row
        for (int j = 0; j < numCols; j++) {
            
            cout <<  a[j][i] << " ";             // here also a[j][i]
            
        }
        cout << endl;
    }
}

int main() {
    int array2D[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int rows = 3;
    int cols = 4;
    
    process2DArray(array2D, rows, cols);
    
    return 0;
}

