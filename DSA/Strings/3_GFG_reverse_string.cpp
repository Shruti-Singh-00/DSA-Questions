/*
    You are given a string s. You need to reverse the string.

    Example 1:

    Input:
    s = Geeks
    Output: skeeG
*/

#include<bits\stdc++.h>
using namespace std;
 
string reverseWord(string str){
    
    string rev = "";
    for(int i = str.size()-1;i>=0 ;i--){
        rev += str[i];                           // Adding two strings...
    }
    
    return rev;
    
}

int main()
{
    string s;
    cin>>s;

    cout<<reverseWord(s);
    
    return 0;
}