#include <iostream>
using namespace std;
    
int main()
{
    float amount;
    cout<<"Enter amount : ";
    cin >> amount;

    int rupee = (int)amount;
    int paisa = (amount - rupee)*100;

    cout<<"Rupee = "<<rupee<<" ";
    cout<<"Paisa = "<<paisa<<endl;

    return 0;
}