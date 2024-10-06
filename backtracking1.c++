#include <bits/stdc++.h> 

// RAT IN A MAZE PROBLEM


bool isSafe(int newx, int newy, vector<vector<bool>>&vis, vector<vector<int>>& arr, int n ){

    if ( (newx >=0 && newx <n) && (newy >=0 && newy <n) && 
          vis[newx][newy] == 0 && arr[newx][newy] ==1){
              return true;
          }

    return false;

}



void solve(int x, int y, vector<vector<int>>& arr, int n,
 vector<string>&ans,vector<vector<bool>>&vis, string path){

    //  base case - when you reach to the end
    if (x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }

    // 4 Movement
    // D, L, R, U

    // Down
    if(isSafe(x+1, y, vis, arr, n)){
        vis[x][y] = 1;
        solve(x+1, y, arr, n , ans, vis, path + 'D');

        // intialising to false when backtracking / recursion
        vis[x][y] = 0;
    }

        // Left
    if(isSafe(x, y-1, vis, arr, n)){
        vis[x][y] = 1;
        solve(x, y-1, arr, n , ans, vis, path + 'L');

        // intialising to false when backtracking / recursion
        vis[x][y] = 0;
    }

        // Right
    if(isSafe(x, y+1, vis, arr, n)){
        vis[x][y] = 1;
        solve(x, y+1, arr, n , ans, vis, path + 'R');

        // intialising to false when backtracking / recursion
        vis[x][y] = 0;
    }

        // Up
    if(isSafe(x-1, y, vis, arr, n)){
        vis[x][y] = 1;
        solve(x-1, y, arr, n , ans, vis, path + 'U');

        // intialising to false when backtracking / recursion
        vis[x][y] = 0;
    }

}



// main block
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    

    //                           (rows,vector<bool>(cols,0)
    vector<vector<bool>> visited (n, vector<bool>(n,0));
    // this means that create a n*n vector with all the parts initialised to 0



    vector<string> ans;
    string path = "";

    if (arr[0][0] == 0)
        return ans;

    solve(0, 0, arr, n, ans, visited, path);
    return ans;
}

// time complexity 4 ^(n^2)
// space complexity (O(n*m))










// THE N-QUEEN PROBLEM  

void addsolution(vector<vector<int>> &ans, vector<vector<int>> & board,int n){
    
    vector<int>temp;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            temp.push_back(board[i][j]);
        }
    }

    ans.push_back(temp);

}



bool issafe(int row, int col, vector<vector<int>>& board, int n){
    int x = row;
    int y = col;

    // chk for same row
    while(y >= 0){
        if (board[x][y] == 1)
            return false;
        
        else
            y--;
        
    }

    x = row;
    y = col;
    // chk for upper diagonal
    while(x >= 0 && y>= 0){
        if (board[x][y] ==1)
            return false; 
        
        else
            x--;
            y--;
    }

    
    x = row;
    y = col;
    // chk for lower diagonal
    while(x < n && y>= 0){
        if (board[x][y] ==1)
            return false; 
        
        else
            x++;
            y--;
    }

    return true;
}


void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n){

    // base case
    if (col == n){
        addsolution(ans, board, n);
        return;
    }

    // solve 1 case and rest recursion will solve

    for (int row = 0; row < n; row++){

        if (issafe(row, col, board, n)){
            // if placing queen in these location is safe
            board[row][col] =1;
            solve(col+1, ans, board, n);

            // backtrack
            board[row][col] = 0;
        }
    }
}




vector<vector<int>> nQueens(int n)
{
	
    vector<vector<int>> board (n, vector<int>(n, 0));
    vector<vector<int>> ans;

    solve(0, ans, board, n); // 0 is col
	
    return ans;
}



// SUDOKU


bool isSafe(int row, int col, vector<vector<int>>& board, int val){

    for (int i = 0; i < board.size(); i++){
        // row check
        if (board[row][i] == val){
            return false;
        }
        // col check
        if (board[i][col] == val){
            return false;
        }
        // 3*3 matrix check
        if (board[3*(row/3) + i/3][3*(col/3) + i%3] == val)
            return false;
    }
    return true;
}

bool solve(vector<vector<int>>& board){

    int n = board[0].size();  // size of row 0 i.e. 9

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){

            // cell empty
            if (board[row][col] == 0){
                for (int val = 1; val <= 9; val++){
                    if (isSafe(row, col, board, val)){
                        board[row][col] = val;

                        // recursive call
                        bool aagesolpossible = solve(board);
                        if (aagesolpossible)
                            return true;
                        else{
                            // backtrack
                            board[row][col] = 0;
                        }
                    }
                }

                return false;
            }
        }
    }

    return true;
}



void solveSudoku(vector<vector<int>>& sudoku)
{
	// Just fill the values in the given matrix

    solve(sudoku);
}

// TC = (9^m)
// SC = O(1)


