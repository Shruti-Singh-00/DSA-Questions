// Sum of N numbers...
#include <iostream>
using namespace std;
    
int fun(int n)
{
    if (n>0)
    {
        return fun(n-1) + n;
    }
    return 0;
}

int main()
{
    int a;
    a = fun(10);
    cout << a << endl;
    
    return 0;
}