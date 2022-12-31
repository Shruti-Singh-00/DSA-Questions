// Indirect Recursion...

#include <iostream>
using namespace std;

void funB(int n);

void funA(int n)
{
    if (n > 0)
    {
        cout << "funA : "<< n << endl;
        funB(n - 1);
    }
}

void funB(int n)
{
    if (n > 0)
    {
        cout << "funB : "<< n << endl;
        funA(n / 2);
    }
}

int main()
{
    funA(10);
    return 0;
}