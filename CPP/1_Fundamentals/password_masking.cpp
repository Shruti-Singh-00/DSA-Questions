/*  Write a program to emulate the username password interface using c++.
    Through graphical interface is not required.
    Mask every character input for the password with an asterisk symbol.
    Later once the input is over , display the password. */

    /*getch()   hold the output screen for some time 
                until the user passes a key from the keyboard 
                to exit the console screen.*/
                
#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    char password[20];
    cout<<"Password : ";
    
    int p=0;
    do{
        password[p]=getch();   
        if(password[p]!= 13)   // 13 is ASCII value of ENTER.
        {
            cout<<"*";
        }
        p++;
    }while(password[p-1]!= 13);
    password[p-1]='\0';

    cout<<"\nYou have entered "<<password<<" as password.";
    return 0;
}