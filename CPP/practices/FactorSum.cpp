#include <iostream>
using namespace std;
    
int main()
{
    int n;
    int sum = 0;
    cout<<"Enter any integer :";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            sum = sum + i;
        }
        
    }

    cout<<"Sum of all the factors is "<<sum<<endl;

    return 0;
}