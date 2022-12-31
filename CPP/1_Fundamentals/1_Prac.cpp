/*
    Input -> 234
    Output -> 15

    Explaination :-
    product of digits = 2*3*4 = 24
    sum of digits = 2+3+4 = 9
    Result = 24 - 9 = 15
*/

#include<bits\stdc++.h>
using namespace std;
 
void fun(int n)
{
    int prod = 1;
    int sum = 0;

    while (n > 0)
    {
        int temp = n%10; 
        prod = prod * temp;
        sum = sum + temp;
        n = n/10;
    }
    
    cout << "Output : " << prod - sum << endl;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    fun(n);

    
    return 0;
}