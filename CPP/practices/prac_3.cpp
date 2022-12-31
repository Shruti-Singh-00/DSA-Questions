// Armstrong number
#include <iostream>
#include <math.h>
using namespace std;
    
int main()
{
    // Input from user.
    int n;
    int size = 0;
    cout<<"Enter a number : ";
    cin>>n;
    int num = n;
    int original = n;

    // Length of given number.
    while (n > 0)
    {
        n = n/10;
        size = size + 1;
    }
    
    // Finding ARMSTRONG NUMBER.
    int d = 0;
    int cube = 1;
    int sum = 0;

    for (int i = 0; i < size ; i++)
    {
        d = num%10;
        cube = floor(pow(d,size));
        num = num/10;
        sum = sum + cube;
    }

    // Checking original number with sum of cubes of individual digit.
    if (original == sum)
    {
        cout<<original<<" is an armstrong number.";
    }
    else
    {
        cout<<original<<" is not an armstrong number.";
    }
    
    return 0;
}