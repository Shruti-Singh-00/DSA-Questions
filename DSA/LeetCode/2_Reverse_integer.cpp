/*Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], 
then return 0.*/

#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long int reverse = 0;
        long int remainder;
        while(x != 0)
        {
            remainder = x % 10;
            x = x/10;

            if(reverse > (INT32_MAX/10) || reverse < (INT32_MIN /10))  // important line
            {
                return 0;
            }
            reverse = reverse*10 + remainder;
        }
        return reverse;
    }
};

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    Solution s;
    cout << s.reverse(num) << endl;

    return 0;
}