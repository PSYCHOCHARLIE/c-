#include <cmath>
#include<bits/stdc++.h>
#include <vector>
#include <iostream>// vector_name.front() means print the 0th value and  vector_name.back() means print last value 
using namespace std;
// ifu want to add something in an array it size will get double not acc to ur will

int studenttotalscore(vector<int>& a) {
    int sum = 0;
    for (int j = 0; j < 5; j++)
        sum += a[j];
    return sum;  // return {} ; meaning returning empty vector, u return vector using curly braces only
}

int main() {
    int n, j, i = 0, d = 0;
    cin >> n;
    int comp[n];
    vector<int> arr;                   //vector<int>arr(n);
    while (i < n) {
        for (int j = 0; j < 5; j++) {   //for (int j =0 ; j < arr.size() ; j++)//size is given by n//for (auto.begin();aut)
            int value;                  //is vector ka size 5 hai
            cin >> value;               //cin>>arr[n];//another method to put values in a vector
            arr.push_back(value);
        }

        comp[i] = studenttotalscore(arr);
        arr.clear(); // Clear the vector for the next iteration
        i++;
    }
    for (int k = 1; k < n; k++) {
        if (comp[0] < comp[k])
            d++;
    }
    cout << d;

    return 0;   
}

// assign() – It assigns new value to the vector elements by replacing old ones
// push_back() – It push the elements into a vector from the back
// pop_back() – It is used to pop or remove elements from a vector from the back.
// insert() – It inserts new elements before the element at the specified position

// erase() – It is used to remove elements from a container from the specified position or range.
// Erase the element at index 2 (value 3)
    //vec.erase(vec.begin() + 2); starting se hi start krenge

// swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
// clear() – It is used to remove all the elements of the vector container
// emplace() – It extends the container by inserting new element at position
// emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
