#include <iostream>
using namespace std;
    
int fun(int n)
{
    if (n>0)
    {
        cout<<n<<endl;
        fun(n-1);
        fun(n-1);
    }
    return 0;
}

int main()
{
    int a;
    a=fun(3);
    cout<<a<<endl;
    
    return 0;
}