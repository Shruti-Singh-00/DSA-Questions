#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number of riders : ";
    cin >> num;
    int A[num];

    cout << "Enter speed of players"<<endl;
    for (int i = 1; i <= num; i++)
    {
        cin >> A[i];
    }

    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + A[i];
    }

    int avg = sum / num;
    
    for (int i = 1; i <= num; i++)
    {
        if (A[i]>avg)
        {
            cout<<"Player "<<i<<" is qualified with speed of "<<A[i]<<endl;
        }
        
    }

    return 0;
}