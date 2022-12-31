/*      -------- Combination Formula (nCr = n!/r!(n-r)! ) ---------*/
#include <iostream>
using namespace std;
    
int fac(int x)
{
    if (x==0)
    {
        return 1 ;
    }
    
    else
    {
        return fac(x-1)*x;
    }
    return 0 ;
}

int com(int n, int r)
{
    int a, b, c;
    a = fac(n);
    b = fac(r);
    c = fac(n-r);

    return a/(b*c);
}

int main()
{
    int n, r, a;
    cout << "Enter total items : ";
    cin >> n;
    
    cout << "Enter selected items : ";
    cin >> r;
    
    a = com(n, r);
    cout << a << endl;

    return 0;
}