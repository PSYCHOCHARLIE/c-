#include <iostream> // find index of the key element in the array
using namespace std;//only when array is sorted
//*********USES THE METHOD OF 2 POINTERS(START & END)****************

int BinarySearch(int arr[] , int size , int key){
    int start = 0 ; // start 0th index pe hai
    int end = size-1 ; // end last me hai

    int mid = (start + end )/ 2 ;//mid me aajao//ye wala bade numbers ke liye add krne pe limit exceed kr skti hai kuch case fail hoskteh
    // start + (end - start)/2; //iska mtlb upar wala hai par chalaki se ***more memory***

    while (start <= end){

        if (arr[mid] == key)
        return mid;

        // go to right wala part
        else if (key > arr[mid])
        start = mid + 1;
        
        // go to left wala part   start 0 pe rahega end  mid ke pehle aajayega
        else
        end = mid - 1;

        mid =( start + end) / 2;
        
    // start + (end - start)/2; //iska mtlb upar wala hai par chalaki se

    }
    return -1;

}

int main() {
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index = BinarySearch(even , 6 , 12);

    cout << "index of 12 is " << index ;
    return 0 ;
    }
