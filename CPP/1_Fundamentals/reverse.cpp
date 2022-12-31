#include <iostream>
#include <math.h>
using namespace std;
    
int main()
{
    int num,remainder;
    cout<<"Enter a number : ";
    cin>>num;

    int original = num;
    int len =  (log(num) / log(10)) + 1;

    int reverse = 0;
    for (int i = 1; i <= len; i++)
    {
        remainder = num%10;
        num = num/10;
        reverse = reverse*10 + remainder;
    }

    cout<<"Reverse of "<<original<<" is : "<<reverse<<endl;
    
    return 0;
}