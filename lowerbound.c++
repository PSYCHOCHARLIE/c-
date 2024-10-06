#include <iostream>
#include <algorithm>//lower bound stl

using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];//if the number is present it just returns the number and if not returns next number
    }
    auto *itr=lower_bound(a,a+5,3);//a=first element,,a+5= last element,,3=jo num find krna hai
    cout<<*itr;//* because we need to find the number//it returns an iterator that is why we are using *
    return 0;
}

#include <iostream>
#include <algorithm>//upper bound stl

using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)  //here if it finds the number returns the position nhi mila to agle number ka postion returns kr dega
    {
        cin>>a[i];
    }
    auto itr=lower_bound(a,a+5,3)-a;//subtracting 1 or first term position to find the index,,in case of vector a.begin() stuff
    cout<<itr;              //removing * if we need to find the index
    return 0;
}
   
   