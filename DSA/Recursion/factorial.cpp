#include <iostream>
using namespace std;

// int fac = 1;

// int fun(int n)
// {
//     if (n > 1)
//     {
//         fac = fac * n;
//         fun(n - 1);
//         return fac;
//     }
//     return 0;
// }

// int main()
// {
//     int a;
//     a = fun(5);
//     cout << a << endl;

//     fac = 1;
//     a = fun(6);
//     cout << a << endl;

//     return 0;
// }

int fun(int n)
{
    if (n==0)
    {
        return 1 ;
    }
    
    else
    {
        return fun(n-1)*n;
    }
    return 0 ;
}

int main()
{
    int a;
    a = fun(5);
    cout << a << endl;

    a = fun(10);
    cout << a << endl;

    return 0 ;
}