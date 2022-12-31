#include<iostream>
using namespace std;
 
int main()
{
    char A[] = "Hello World";

    int a;
    for (a = 0; A[a] != '\0'; a++)
    {}
    cout << "Length is : " << a <<endl;

    int temp;
    for (int i = 0, j = a - 1; i <= j; i++, j--)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    for (int i = 0; i < a; i++)
    {
        cout << A[i];
    }

    return 0;
}