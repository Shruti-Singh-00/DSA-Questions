#include<bits\stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<"Size->"<<v.size()<<endl;
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.pop_back();
    
    cout<<"v : "<<endl;
    for (int i = 0; i < v.size(); i++)      // printing all the elements present in a vector
    {
        cout << v[i] << " ";
    }
    cout<<endl;

    v.clear();

    cout<<"Size->"<<v.size()<<endl;
    cout<<"Capacity->"<<v.capacity()<<endl;

    
      
    vector<int> g1;
    int n,a;
    cout<<"Enter number of elements : ";
    cin>>n;
 
    for (int i = 0; i < n; i++)            // storing all the elements in a vector
    {
        cin>>a;
        g1.push_back(a);
    }
 
    cout<<"g1 : "<<endl;
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)    //printing all the elements...
        cout << *i << endl;

    return 0;
}
