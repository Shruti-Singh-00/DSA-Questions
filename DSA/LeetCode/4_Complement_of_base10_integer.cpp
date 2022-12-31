/*The complement of an integer is the integer you get when you flip all the 0's to 1's 
and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

 
Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.*/

#include<bits\stdc++.h>
using namespace std;
 
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0)
        {
            return 1;
        }
        
        else
        {
            int comp = ~n;        // complement (changes 1's to 0 and 0's to 1's)

            int temp = 0;
            while(n!= 0)
            {
                temp = (temp << 1) | 1;       // temp left shift OR with 1..
                n = n >> 1;                   // n right shift 
            }
            return (comp & temp);             // return integer after compliment..
        }
    }
};
 
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    Solution s;
    cout << s.bitwiseComplement(num) << endl;
    
    return 0;
}