#include <bits/stdc++.h>
// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {

//     stack<int>s;
//     s.push(-1);

//     vector<int>ans(n);   // **********************IMPORTANT*********************

//     for (int i = n -1 ; i >=0 ; i--){

//         while(s.top() >=arr[i]){
//             s.pop();
//         }

//         // ans is stack ka top
//         ans[i] = s.top();
//         s.push(arr[i]);
//     }

//     return ans;
// }