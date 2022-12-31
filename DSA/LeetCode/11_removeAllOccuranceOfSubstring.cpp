/* Given two strings s and part, 
perform the following operation on s until all occurrences of the substring part are removed:
Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.
A substring is a contiguous sequence of characters in a string.

Example 1:
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".

Example 2:
Input: s = "axxxxyyyyb", part = "xy"
Output: "ab"
Explanation: The following operations are done:
- s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
- s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
- s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
- s = "axyb", remove "xy" starting at index 1 so s = "ab".
Now s has no occurrences of "xy".*/

                //************** My Solution ************
#include <iostream>
#include <vector>
#include <algorithm>
#include<list>
using namespace std;

// string removeOccurrences(string s, string part) {
//     string temp;
//     long long int n1 = s.length();

//     for(long long int i = 0; i <= n1; i++)
//     {
//         std::string::size_type  j = s.find(part);
//         if (j != std::string::npos)
//         {
//             s.erase(j, part.length());
//         }

//         n1 = s.length();
//         if(i >= n1)
//         {
//             i = 0;
//         }
//     }
//     temp = s;
//     return temp;
//     }

                    //************ Best Solution ************
string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos )
            s.erase(s.find(part),part.length());
        return s;
    }

int main()
{
    string s1 = "aaaaaaaaaa";
    string s2 = "a";

    cout << removeOccurrences(s1,s2);
   

    return 0;
}