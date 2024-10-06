#include <bits/stdc++.h>

using namespace std;

void reverse(string& str,int i, int j){
  
  if (i > j)
  return ;
  
  swap(str[i], str[j]); // if (str[i] != str[j])  //this for to check palindrome 
  i++;j--;
  
  reverse(str,i,j);
    
}

int main(){
    
    string name = "rishikesh";
    
    reverse(name, 0, name.length() - 1);
    
    cout << name << endl;
    
    
    return 0;
}

/*#include <bits/stdc++.h>  // power a ^ b

using namespace std;

int power(int a , int b){
    if (b == 0)
    return 1;
    
    if (b == 1)
    return a;
    
    else
    return a * pow(a,b-1);
}

int main(){
    
    int a , b;
    cin >> a >> b;
    int ans = pow(a,b);
    
    cout << power(a,b) << endl;
    
    return 0;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

int sort(int *arr , int n){
    if (n <= 1)
    return 1 ;
    
    // solve the first case first rest recursion will solve
    
    for (int i = 0 ; i < n - 1 ; i++){
        if (arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    
    return sort (arr, n-1); // after sorting the first now only n -1 elements are left
    
}

int main(){
    
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    sort(arr,n); 
    
    
    for (int i = 0 ; i < n ; i++){
        cout << arr[i];
    }
    
    return 0;
}
*/
















