#include <iostream>
using namespace std;

int fun(int n, int m)
{
    if (m==0) 
    {
        return 1;
    }
    
    else
    {
        return fun(n,m-1)*n;
    }
    return 0;
}

int main()
{
    int a, b, r;
    cout << "Enter number : ";
    cin >> a;

    cout << "Enter Power : ";
    cin >> b;

    r = fun(a,b);
    cout << r << endl;

    return 0;
}