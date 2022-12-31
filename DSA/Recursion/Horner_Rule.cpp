/*
        Using Horner's Rule for solving Taylor series...
        e^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4!        (Taylor series)
        e^x = 1 + x/1[ 1 + x/2[ 1 + x/3[ 1 + x/4 ]]]    (Taylor series using Horner's Rule)

        Now, by using this Rule time complexity is O(n).

*/

#include <iostream>
using namespace std;

double fun(int x, int n)
{
    static double sum = 1;

    if (n == 0)
    {
        return sum;
    }

    else
    {
        sum = 1 + (x * sum / n);
        return fun(x, n - 1);
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