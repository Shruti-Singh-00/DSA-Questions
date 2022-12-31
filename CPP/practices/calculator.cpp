/*
                    **********    CALCULATOR    **********
*/
#include <iostream>
// using namespace std;
    
int main()
{
    int num1,num2,original;
    cout<<"Enter a number : ";
    cin>>num1;
    cout<<"Enter another number : ";
    cin>>num2;

    char op;
    cout<<"Enter operator : ";
    cin>>op;

    if (op == '+')
    {
        cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
    }
    
    else if (op == '-')
    {
        if (num2 > num1)
        {
            original = num1;
            num1 = num2;
            num2 = original;
        }
        cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
    }
    
    else if (op == '*')
    {
        cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;
    }
    
    else if (op == '/')
    {
        cout<<num1<<" / "<<num2<<" = "<< float(num1) / float(num2)<<endl;
    }
    
    return 0;
}