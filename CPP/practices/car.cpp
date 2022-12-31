/*Problem
Chef rented a car for a day.

Usually, the cost of the car is Rs 10 per km. However,
since Chef has booked the car for the whole day, he needs to pay for at least 300 kms
even if the car runs less than 300kms.

If the car ran XX kms, determine the cost Chef needs to pay.*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;

        if (x <= 300)
        {
            cout << 3000 << endl;
        }

        else
        {
            cout << x * 10 << endl;
        }
    }

    return 0;
}