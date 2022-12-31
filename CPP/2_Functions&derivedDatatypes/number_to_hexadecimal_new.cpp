#include <iostream>
#include <conio.h>
#include <vector>
#include <map>
#include <typeinfo>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int digit; 
    vector<string> nums;
    string c_digit = "";
    int x = 0;

    int p = 0;

    map<int, string> hexaDic;

    hexaDic[10] = "A";
    hexaDic[11] = "B";
    hexaDic[12] = "C";
    hexaDic[13] = "D";
    hexaDic[14] = "E";
    hexaDic[15] = "F";

    int i;
    for (i = 0; num > 0; i++)
    {
        digit = num % 16;
        num = num / 16;
        nums.push_back(to_string(digit));
    }

    reverse(nums.begin(), nums.end());

    cout<<"Hexadecimal equivalent : ";
    for (string i : nums)
    {
        int j = stoi(i);
        if(j>9){
            auto it = hexaDic.find(j);
            cout << it->second ;
        }else
        {
            cout << i ;
        }
        
    }
    return 0;
}