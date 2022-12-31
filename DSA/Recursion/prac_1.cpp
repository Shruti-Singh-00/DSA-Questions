// Static and global recursion...
#include <iostream>
using namespace std;
    
                //*********** static variable ***********
int fun(int n)
{
    static int x=0;        
    if (n>0)
    {
        x++;
        cout<<"Value of x : "<<x<<endl;
        return fun(n-1) + x;
    }
    return 0;
}

int main()
{
    int r;
    r=fun(5);
    cout<<r<<endl;
    
    return 0;
}


/*********** global variable ***********

int x=0; 
int fun(int n)
{       
    if (n>0)
    {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main()
{
    int r;
    r=fun(5);
    cout<<r<<endl;
    
    return 0;
}*/