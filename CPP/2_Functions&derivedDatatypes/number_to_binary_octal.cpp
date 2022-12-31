/*
    Binary -> {0,1}
    Octal -> {0,1,2,3,4,5,6,7}
    decimal -> {0,1,2,3,4,5,6,7,8,9}
    hexadecimal -> {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}
*/
#include <iostream>
using namespace std;
    
int convert(int x,int y)
{
    int digit,i;
    int solution = 0;
    for (i = 1; x>0 ;i = i*10)
    {
        digit = x%y;
        solution = solution + digit*i;
        x = x/y;
    }
    return solution;
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<<"Decimal Equivalent : "<<num<<endl;
    cout<<"Binary Equivalent : "<<convert(num,2)<<endl;
    cout<<"Octal Equivalent : "<<convert(num,8)<<endl;
    
    return 0;
}