#include <bits/stdc++.h>

using namespace std;

// signed int represent both + & -
// unsigned int represent   + 

int main(){

    // odd = 1 and  even = 0 
    int n = 5; 
    cout << (n & 1)<<endl; 

    // similar zero , different one
    int x = 4; 
    int y = 8;
    cout << (x ^ y) << endl;
        // x = x ^ y;
        // y = x ^ y;   
        // x = x ^ y; // code of swapping 2 nos using xor operator



    // In the context of signed integer representation using two's complement, "11111011" represents the decimal 
    // value "-5."

    // However, if you interpret "11111011" as an unsigned binary number (not considering the sign bit), then it 
    // represents the decimal value "251."

    int a = 5;
    cout << "~ operator means + 1   "<<endl << ~a << endl << -~a;

    
    
	

    return 0;
}

