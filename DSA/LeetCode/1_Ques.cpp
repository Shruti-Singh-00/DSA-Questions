#include<bits\stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int remainder, i = 1;

    // Until the value of n becomes 0.
    while(n!=0){
        remainder = n % 2;
        ans += remainder*i;
        i = i * 10;
        n = n / 2;
    }

    return ans;
}

int compliment(int n)
{
    int temp = decimalToBinary(n);
    int rem = temp % 10;
    temp = temp / 10; 

    cout << temp1;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << decimalToBinary(n);
    compliment(n);

    return 0;
}