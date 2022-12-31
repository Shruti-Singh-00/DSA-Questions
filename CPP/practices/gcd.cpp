#include <iostream>
using namespace std;
    
int main()
{
    int a, b;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Enter another number : ";
    cin>>b;
    int original = a;
    int gcd;

    if (a > b) // 30, 7
    {
        a = b; // a = 7
        b = original; // b = 30
    }
    for (int i = a; i > 0; i--)
    {
        if (a%i == 0 && b%i == 0)
        {
            gcd = i;
            break;
        } 
    }
    cout<<"Greatest common divisor of given two numbers is : "<<gcd<<endl;
    return 0;
}