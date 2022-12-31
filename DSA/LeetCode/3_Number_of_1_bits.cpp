/* Write a function that takes an unsigned integer and returns the number of 1 bits it has..*/

#include<bits\stdc++.h>
using namespace std;
 
class Solution
{
public:
    int fun(uint32_t n)
    {
        int count = 0;
        while (n != 0)
        {
            if (n&1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    Solution s;
    cout << s.fun(num);
    
    return 0;
}