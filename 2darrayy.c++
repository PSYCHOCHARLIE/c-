#include <bits/stdc++.h>
using namespace std;

int main(){


vector< vector<int> > arr; // Declaration of a 2D vector

arr.push_back(vector<int>{1, 2, 3}); // Adding a row {1, 2, 3}
arr.push_back(vector<int>{4, 5, 6}); // Adding a row {4, 5, 6}

// Access elements like a 2D array:
int x = arr[0][1]; // x = 2 (element from row 0, column 1)
cout << x;
return 0;
}

// ******************************************************************
// vector<vector<bool>> visited (rows, vector<bool>(cols,0));
// this means that create a n*n vector with all the parts initialised to 0
// ******************************************************************


/* suppose you are making 3 * 4 matirx

rows ->  refers to the number of rows in your grid (matrix).
For example, if you want a grid of size 3x4, rows would be 3.

vector<bool>(cols, 0): [0,0,0,0]
This part creates each row of the grid, where:
cols is the number of columns (in this case 4).
0 initializes each element of the row to 0 (which is false for bool types).

*/