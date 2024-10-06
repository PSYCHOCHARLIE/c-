#include <bits/stdc++.h>//works from right to left,,round1-largest element extreme right,,round-2 second largest extreme right -1 and goes on
using namespace std;// n-1 tk chalega//ith round me ith largest element ko uske largest place pe pahuchate hain
int main() // ascending order
{

    int n ; cin>>n;int arr[n];
    for (int i = 0 ; i < n ; i++){//giving values
        cin >> arr[i];
    }
    
    for ( int i = 1 ; i < n ; i++){ // extreme right wala sabse bada hoga that is why
        // har round me sabse bada wala element right side place ho jayega
        for ( int j =0 ; j < n-i ; j++ ){ // loop n - i tk chal rha h last wala sbse chota hoga wo apne app arrange ho jayega
            
            if (arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    for (int i = 0 ; i < 5 ; i++){
        cout << arr[i] << ",";
    }
}