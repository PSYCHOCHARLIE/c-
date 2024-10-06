#include<bits/stdc++.h> // arr[i] = *(arr+i)   OR   i[arr] = *(i+arr)
using namespace std;

    /*
    int main(){
    int arr[10] = {2,5,6};
    cout << "address of first memory block is = "<<arr<<endl;
    cout << "address of first memory block is = "<<&arr[0]<<endl; 
    cout << "address of first memory block is = "<<&arr<<endl;  // all 3 represent address of 0th location
    cout << "value of first location is = " << *arr <<endl;
    cout << "value of first location + 1 is = " << *arr + 1 <<endl;
    cout << "value of second location using first location is = " << *(arr+1) <<endl;}
    */

   /* int main(){
   int temp[10];
   cout << "size of temp is = "<<sizeof(temp) << endl;
   int *ptr = &temp[0];
   cout <<"size of pointer containing address of temp[0] is = "<<sizeof(ptr) << endl;
   cout <<"value of pointer containing address of temp[0] using size is = "<<sizeof(*ptr)<<","<< sizeof(&ptr) << endl;}
    */

   /*
   int a[20] = {1,2,3,4,5};
   cout << "->" << &a[0]<<endl;
   int *p = &a[0];
   cout << "->" << &p<<endl; // different answer but chatgpt says same
    */
   /*
   int main(){
   int arr[10] = {1,2};
   int *ptr = &arr[0];
   cout << ptr << endl;
   ptr = ptr + 1;
   cout << "ptr = "<<ptr << "     &     *ptr = "<< *ptr << endl;
   return 0 ;}
   */

  // character array
  /*
  char ch[6] ="abcde"; // one number extra needs to be used in char arrays
  cout << ch << endl ;

  char ch = 'a'  // question
  char* ptr = &ch;
  ch++;
  cout << *ptr << endl;   // output = b
  */


    // passing pointer in a function

      /* int getsum (int *arr , int n){ // or arr[]
        int sum  = 0;
        for (int i = 0 ; i < n ; i++)
        sum += arr[i];
        return sum; 
       }
       int main (){
        int arr[6] = {1,2,3,4,5,8};
        cout << "sum is = "<< getsum(arr+3,3) << endl; // passing only last 3 values in a function using pointers
                // in recursion(sorting) (arr+1, size -1); 
       }*/
    
    
    
    
    
    
    
    
    
    
    
    
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
