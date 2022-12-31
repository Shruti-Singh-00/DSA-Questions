#include <iostream>
using namespace std;

                        //************* By do-while method *************

int fun(){
        int start,end,check;
        cout << "Enter starting point : ";
        cin >> start;
        cout << "Enter ending point : ";
        cin >> end;

        check = start;
        if (start>end)
        {
            start = end;
            end = check;
        }
        if (start<0 || end>50000)
        {
            cout<<"Please enter range between 0 and 50000"<<endl;
            return 0;
        }

        cout <<"Prime numbers between "<<start<<" and "<<end<<endl;
        for (int i = start; i <= end; i++)
        {
            if (i == 2 ||i == 3 ||i == 5 ||i == 7)
            {
                cout<<i<<" ";
            }
            if (i%2 == 0 ||i%3 == 0 ||i%5 == 0 ||i%7 == 0 )
            {
                cout<< "";
            }
            else
            {
                cout<<i<<" ";
            }
        }
    }

int main()
{
    char response;
    do
    {
        fun();
        cout<<"\nWhether you want to enter another number or not Y/N :";
        cin>>response;
    } while (response == 'Y' || response == 'y');
    
    return 0;
}

                        //************** By goto method ***************

/*int main()
{
    restart :
        int start,end,check;
            cout << "Enter starting point : ";
            cin >> start;
            cout << "Enter ending point : ";
            cin >> end;

            check = start;
            if (start>end)
            {
                start = end;
                end = check;
            }
            if (start<0 || end>50000)
            {
                cout<<"Please enter range between 0 and 50000"<<endl;
                return 0;
            }

            cout <<"Prime numbers between "<<start<<" and "<<end<<endl;
            for (int i = start; i <= end; i++)
            {
                if (i == 2 ||i == 3 ||i == 5 ||i == 7)
                {
                    cout<<i<<" ";
                }
                if (i%2 == 0 ||i%3 == 0 ||i%5 == 0 ||i%7 == 0 )
                {
                    cout<< "";
                }
                else
                {
                    cout<<i<<" ";
                }
            }
        char response;
        cout<<"\nWhether you want to enter another number or not Y/N :";
        cin>>response;

        if (response == 'Y' || response == 'y')
        {
            goto restart;
        }
    return 0;
}*/