#include<bits/stdc++.h> // count the total no of prime nos strictly less than  the given integer 
using namespace std;  // leetcode 204 , count primes
// 2 se start hoga to 2 prime h and jo bhi aage wale nos 2 se divide ho rhe hai unko kaat do , phir 3 prime hai uske baad 3 se
// divisible aage wale nos ko kaat do , next 5 coz 4 2 se kat gaya first step me , 
// int main(){
    // int n ;
    // int count = 0 ;
    // vector<bool>prime( n+1 , true); // vector initialised to n+1 which will chk till n & all are initialised to true, aise hi hota hai nhi to error ayega 
    // prime[0] = prime[1] = false; // bhale n + 1 tk hai but for loop me to n tk hi chal rha hai na

    // for ( int i = 2 ; i < n ; i++){
        
    //     if ( prime[i]){ // jo bhi no aa rha hai vo prime hai coz 2 se start hoga and next me sare 2 se * ko false krdia
    //         count++;
    //     }
    //     for ( int j = 2*i ; j < n ; j = j + i){ // sbko us no se * krke non prime mark krdo
    //         prime[j] = 0;
    //     }
    // 
    // // time complexity o(n*log(logn))
    // return 0;
    // }
    





    // GCD(greatest common divisor) / LCM or euclid's algo ,, gcd(72,24) => gcd(a-b,b) => goes on repeating 

    // int gcd(int a , int b){

    //     if (a==0)
    //     return b; 

    //     if (b==0)
    //     return a ; 


    //     while (a != b){

    //         if ( a > b)
    //             a = a - b;
            
    //         else
    //             b = b - a ;
    // }
    // return a ;
    // }

    // int main(){
        
    //     int a , b;
    //     cout << "enter values of a and b"<<endl ;
    //     cin >> a >> b;
    //     cout << gcd( a , b);

    // }

    
    
    //fast exponentiation (mtlb  eg: 2^12 nikalna hai to isko fast kaise nikalenge)
    // time complexity o(log n)
    //suppose a^b => if b is even => (a^(b/2))^2  &  if b is odd => (a^(b/2))^2 * a
    //https://www.codingninjas.com/studio/problems/modular-exponentiation_1082146
    // (a mod m)+(b mod m)  mod m=a+b  mod m
    // (a mod m)−(b mod m)  mod m=a−b  mod m
    // (a mod m)⋅(b mod m)  mod m=a⋅b  mod m


















   