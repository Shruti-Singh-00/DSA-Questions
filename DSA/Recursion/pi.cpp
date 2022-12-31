#include <iostream>
using namespace std;
    
// int pi(int n)
// {


// }

int main()
{
    string str[20];
    cout << "Enter string : ";
    cin.getline(str,20);    

    string rep = "3.14";
    for (int i = str.begin(); i != str.end(); i++)
    {
        if (str[i] == 'p' && str[i+1] == 'i' || str[i] == 'P' && str[i+1] == 'i' )
        {
            str.replace(i,2,rep);
        }
    }
    
    for (int i = str.begin(); i != str.end(); i++)
    {
        cout << str[i];
    }
    
    return 0;
}