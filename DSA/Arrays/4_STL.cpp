#include<bits\stdc++.h>
using namespace std;
 
int main()
{
    array<int,4>a = {1,2,3,4}; // defined array using STL

    cout<<a[2]<<endl;       

    cout<<a.at(2)<<endl;      // element at second index

    cout<<a.size()<<endl;     // size of an array

    cout<<a.front()<<endl;    // first element

    cout<<a.back()<<endl;     // last element

    return 0;
}