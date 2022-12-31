#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Range of array : ";
    cin >> num;

    int A[num];
    cout << "Enter array's elements." << endl;

    for (int i = 0; i < num; i++)
    {
        cin >> A[i];
    }

    int temp = 0;
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    cout << "Second last highest number is : " << A[num - 2];

    return 0;
}