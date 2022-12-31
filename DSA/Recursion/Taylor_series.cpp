/*
        ****** Taylor series ******
        e^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + --------- + upto n terms.

        Time complexity of this method O(n^2).
        Therefore, we use Horner's Rule for better solution.
*/
#include <iostream>
using namespace std;

double q = 1;
double p = 1;
double r;

double fun(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        r = fun(x, n - 1);
        p = p * x;
        q = q * n;
        return r + p / q;
    }
}

int main()
{
    int a, b;
    double r;
    cout << "Enter number : ";
    cin >> a;

    cout << "Enter term : ";
    cin >> b;

    r = fun(a, b);
    cout << r << endl;

    return 0;
}