#include <iostream>
using namespace std;

                        /* *************** Method 1 *****************/
// int fun(int n)
// {
//     static int a = 0;
//     static int b = 1;
//     static int c;

//     if (n>0)
//     {
//         fun(n-1);                      // Time complexity is O(n)
//         cout<<a<<" ";
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return 0;
// }

                        /* *************** Method 2 ****************/
int F[10];
int fib(int n)
{
    if (n<=1)
    {
        F[n] = n;
        return 0;
    }
    else
    {
        if (F[n-2]== -1)
        {
            F[n-2] = fib(n-2);
        }
        if (F[n-1]== -1)
        {
            F[n-1] = fib(n-1);
        }
        return F[n-2]+F[n-1];
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter total number of terms : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout<<F[n]<<" ";
    }
    

    return 0;
}