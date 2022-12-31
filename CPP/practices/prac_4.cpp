//Prime numbers between given range.
#include <iostream>
using namespace std;
    
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    
    cout<<"All prime numbers between 1 to "<<num<<endl;
    for(int i=2; i<num; i++)
    {
        if (i==2||i==3||i==5||i==7)
        {
            cout<<i<<endl;
        }
        
        if (i%2== 0 ||i%3== 0 ||i%5== 0)
        {
            continue;
        }
        
        else
        {
            cout<<i<<endl;
        }
        
    }

    return 0;
}