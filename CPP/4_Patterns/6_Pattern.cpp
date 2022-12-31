/*
    Enter number of rows : 4
    A 
    B B 
    C C C 
    D D D D 
*/
#include<bits\stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        if (col <= row)
        {
            while (col <= row)
            {
                char ch = 'A' + row - 1;
                cout << ch << " ";
                col = col + 1;
            }
            cout << endl;
            row = row + 1;
        }   
    }
    
    return 0;
}