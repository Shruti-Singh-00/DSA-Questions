#include <iostream>
#include <math.h>
using namespace std;
    
int main()
{
    int term;
    float n;
    cout << "Enter number of terms : ";
    cin>>term;

    cout<<"Submission of : ";
    float sum = 0;
    for (float i = 0; i < term; i++)
    {
        cout<<" "<<(2*i +1)<<"/"<<(2 + 3*i)<<" ";
        n = (2*i +1)/(2 + 3*i);        
        sum += n;       
    }
    cout<<" is "<<sum<<endl;
    return 0;
}