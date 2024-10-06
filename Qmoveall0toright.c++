#include<bits/stdc++.h>
using namespace std;//moving all zeros to right

class Solution {
public:
    void moveZeroes(vector<int>& nums) { // khatarnak algorithm
        int j = 0; // we are moving elements to right not zeros

        for ( int i = 0 ; i < nums.size() ; i++){

            if (nums[i] != 0){
                swap (nums[i] , nums[j]);
                j++;
            }
        }
}};

class Solution { // no need to study only one main point
public:
    void reverseString(vector<char>& s) {

        int start = 0;
        int end = s.size() -1 ;

        while (end >= start){

         char temp = s[start];
         s[start++] = s[end];  // instead of doing start++ and end++ in the end u can do it here only,,takes very much less time
         s[end--] = temp;    
        }
        
    }
};