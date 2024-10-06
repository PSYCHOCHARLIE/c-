#include <bits/stdc++.h>//coding ninjas
using namespace std;//s=sum of digits,,vector me sum of digits chk krni h aur chk krna h s ke equal j ya nhi

vector<vector<int>> pairSum(vector<int> &arr, int s){

   vector<vector<int>>going;//double vector jisme temp vector ki values store hain

   for ( int i =0 ; i<arr.size() ; i++)
   {
      for ( int j =i+1 ; j<arr.size(); j++)
      {
         if (arr[i]+arr[j]== s)
         {
            vector<int>temp;
            temp.push_back(min(arr[i],arr[j]));//gives the min of the 2 arrays
            temp.push_back(max(arr[i],arr[j]));
            going.push_back(temp);


         }

      
         
      }
   }
   sort(going.begin(),going.end());

   return going;

}