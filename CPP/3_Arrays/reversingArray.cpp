#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array before reversing : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int a = arr[start];
        int b = arr[end];
        int temp;

        temp = a; // Swaping
        a = b;
        b = temp;

        arr[start] = a; // Assigning
        arr[end] = b;

        start++;
        end--;
    }

    cout << "Array after reversing : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}