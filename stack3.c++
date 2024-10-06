#include <bits/stdc++.h>
using namespace std;
/*
int main(){  // reversing string using stack
    
    string str = "Rishikesh";
    
    stack<char>s;
    
    // inserting characters into stack
    for (int i = 0 ; i < str.length(); i++){
        
        char ch = str[i];
        s.push(ch);
        
    }
    
    string ans = "";
    
    // popping out elements from the stack, automatically in reverse order
    while (!s.empty()){
        
        char a = s.top();
        ans.push_back(a);
        s.pop();
    }
    
    cout << "the answer is " << ans;
    
    return 0;
}
*/



void solve(stack<int>&a, int count, int size){ // solving using recursion

    // base case (when you reach to the middle element)
    if (count == size/2){
        a.pop();
        return ;
    }

// storing the top element and the storing it
    int num = a.top();
    a.pop();

// Recursive calls

    solve(a, count+1, size);
    a.push(num); // pop wala element lete hue jao
}


int main (){ // removing middle elements from the stack
// first element 1 se start hoga
    int count = 0;

    stack<int> a;
    a.push(10);
    a.push(11);
    a.push(12);
    a.push(13);
    a.push(14);

    int n = 4;  // n = after removing the middle element, this is the size left

    solve(a, count , n);

    for (int i = 0 ; i < a.size() ; i++){
        cout << a.top() << endl;
        a.pop();
    }
}


// valid parenthesis
// https://www.codingninjas.com/studio/problems/valid-parenthesis_795104?leftPanelTabValue=SUBMISSION

// insert at element in the last of the stack
// https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTabValue=SUBMISSION


// *****************reverse the stack****************
// https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?leftPanelTabValue=SUBMISSION


// SORTING OF STACK
// https://www.codingninjas.com/studio/problems/sort-a-stack_985275?leftPanelTabValue=SUBMISSION


// REDUNTANT BRACKETS
// https://www.codingninjas.com/studio/problems/redundant-brackets_975473?count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION

// INVALID BRACKETS
// https://www.codingninjas.com/studio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTabValue=SUBMISSION


// ***************CELEBRITY PROBLEM************
// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1




