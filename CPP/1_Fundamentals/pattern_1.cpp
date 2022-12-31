/* Pattern
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    0 1 0 1 0 1 */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enetr a number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (j < i && i % 2 == 0 && j % 2 != 0)
            {
                cout << "0";
            }

            else if (j < i && i % 2 != 0 && j % 2 == 0)
            {
                cout << "0";
            }

            else if (j <= i)
            {
                cout << "1";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}