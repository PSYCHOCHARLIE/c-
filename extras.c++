#include <bits/stdc++.h> 
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    for (int a : arr) {//here will contain values of array , in the 1st case it holds 10
        cout << a << " "; // Output each element,, Iterate over the elements of the array
    }
    //sort()
    //sort(nums.begin(), nums.end()); sorts the given vector nums in ascending order 
    //in bool datatypes you need to either return true or false in function or a
    //  condition like return (x==y) means if condn true it returns true
    

    // m == matrix.length    represent row    , sometimes in vector matrix if rows and col are not given check in constraint part
    //n == matrix[0].length   represent column
    // matrix[0] represents the first row of the matrix, and matrix[0].length gives
    //  you the number of columns in that first row.

    /*char ch = ('A' + 5-1);
      std::cout <<ch; putput will be E */

    //array swapping
      int arr[5] = {1, 2, 3, 4, 5};

    swap(arr[3], arr[1]); // Swap values, not elements

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; //14325
    }

    /*when you pass an array in a function it passes the pointer not the whole array. i write like  arr in the defined function
    but what it takes is *arr or arr[] which is a pointer*/


//  Linked List               finding  mid  of  the  linked  list

//  create 2 pointers   slow  and  fast
// slow pointing to the first node   &   fast pointing to the second node
// slow will move single steps and fast will move double steps(nodes)
// when fast points to null then slow will be at mid automatically     TRY!!!




// suppose there is a lined list:   1 -> 2 -> 3 -> 4
// and head points to the node 1.

// if there is written head -> next, it means that the head(1) pointer(->) is the head -> next
// not 2 is the head next.

// similarly if head -> next -> next, it means 2 node ka pointer

// Example : head -> next -> next = head
// this means that, place the 2 pointer to 1    ( 2 -> 1)



// Recursion     (unwinding clearance)
// void rem(stack<int>& ss, int a, int i){
        
//         i++;
        
//         if ( i == a){
//             ss.pop();
//             return;
//         }
        
//         int b = ss.top();
        
//         ss.pop();
//         rem(ss, a, i);
//         ss.push(b);

        // in this code after the return statement the code will return to the previous recursion 
        // then ss.push(b) statement will execute.
        // So, then the question is, there is no return statement in the last so what will it return.

        // In c++, if there is no return statement it will automatically unwind the recursion process
        // apne aap pichle wale recursion form pe chala jayega
    // }


  // unordered_map<char, int> var;

  // this is just like dictionary where 'char' is the key and 'int' is the value of the key
  // IMPORTANT THING 
  // var[some character]++;
  // this means that if any character is input in the var then it's value is increased by one.
  // e.g. suppose -> var[a]++
  // this means that character 'a' has 'int' value 1;
  // simimlarly if you again enter a and that above task happens its value gets inc by 2.

unordered_<char, int> count;
    string a = "aabc";
    char b = a[0];
    count[b]++;  // ans = 1
    count[b]++;  // ans = 2
    
    cout << count[b];


  return 0;

// *******************************************************
string a = ""; 

cout << a + "d"; // ouput : d
cout << a.append("d");

}

// *******************************************************
vector<int> ans;
// this means ans is a one-dimensional vector of integers and can store values like {3,4,6,7}, etc
// insertion is simple: ans.push_back(0) and so on.


vector<int> ans[n]; // let n = 2
// this means ans is an array of n vectors mtlb ans 4 vector include krta hai
ans[0].push_back(1);
ans[1].push_back(2);
ans[0].push_back(3);
ans[1].push_back(4);

// output 
ans[0] = {1,3}
ans[1] = {2,4}



// Initialize a vector with 3 elements
std::vector<int> a = {10, 20, 30};

// Print the current value of a[1]
std::cout << "Before increment, a[1]: " << a[1] << std::endl; // Output: 20

// Apply postfix increment operator to a[1]
std::cout << "Postfix increment returns: " << a[1]++ << std::endl; // Output: 20

// Print the value after the increment
std::cout << "After increment, a[1]: " << a[1] << std::endl; // Output: 21

