//power (m^n)
#include <iostream>
using namespace std;
    
int main()
{
    int m , n;
    cout << "Enter a number : ";
    cin >> m;
    cout << "Enter another number : ";
    cin >> n;
    int power = 1;

    int i = 1;
    do
    {
        power = power * m;
        i++;
    } while (i <= n);
    
    cout<<m<<"^"<<n<<" is : "<<power<<endl;
    return 0;
}