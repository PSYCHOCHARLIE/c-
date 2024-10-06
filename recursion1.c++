#include <bits/stdc++.h>
//  MAKE RECURSION TREES
using namespace std;
// write BASE CASE first and return something


  int factorial (int n){
    if(n == 0)
    return 1 ;
    
    return (n * factorial(n-1));
     
}
int rec(int x){ // fibonacci
    
    if ( x == 1 )
    return 1;
    if (x == 0)
    return 0;
    
    return rec(x-1)+rec(x-2);
}

int main(){

    // int c = factorial (n-1);
    // int b = n * c;// this line will NOT execute, IT WILL START EXECUTING WHEN BASE CASE COMES TRUE DURING UNWINDING

    
//     #include <bits/stdc++.h>  // Using Dynamic Programming
// int countDistinctWays(int nStairs) {
    
//     if (nStairs == 0)
//     return 1;
//     if (nStairs < 0)
//     return 0;

//     return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    

// }


    



    
















    return 0;
}

