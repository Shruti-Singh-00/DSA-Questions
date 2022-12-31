// Checking daigonal elements.
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the number of rows : ";
    cin >> a;
    cout << "Enter the number of columns : ";
    cin >> b;

    if (a != b)
    {
        cout << "Numer of rows and columns are unequal.";
    }
    else
    {
        int A[a][b];
        cout << "Enter the elements of matrix : ";
        // Log the user input
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> A[i][j];
            }
        }
        cout<<endl;

        int temp = A[0][0];
        int count = 0;
        for (int i = 0; i < a; i++)
        {
            if (A[i][i] == temp)
            {
                count++;
            }
        }

        for (int i = 0; i < a; i++)
        {
            cout<<"| ";
            for (int j = 0; j < a; j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<"|"<<endl;
        }

        if (count == a)
        {
            cout << "All daigonals are equal.";
        }
        else
        {
            cout << "Daigonal elements are unequal.";
        }
    }
    return 0;

}