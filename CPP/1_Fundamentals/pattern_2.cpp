/* Pattern
    1
    2 6
    3 7 10
    4 8 11 13
    5 9 12 14 15 */

#include <iostream>
using namespace std;

int main()
{
    int num, x;
    cout << "Enter number : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        int diff = num - 1;
        int value = i;

        for (int j = 1; j <= i; j++)
        {
            cout << value<<" ";
            value += diff;
            diff--;
        }
        cout << endl;
    }

    return 0;
}