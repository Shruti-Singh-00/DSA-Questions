/*Write a program to input details of three students(Name, class and section,
marks in three subjects, gender) and display all the details,
 with the average and percentage obtained alongwith the result (pass or fail). */

#include <iostream>
using namespace std;

struct student
{
    char name[20];
    char kaksha[20];
    char gender;
    float marks1;
    float marks2;
    float marks3;
    float average;
    char decision[20];
} s[20];

int main()
{
    int num;
    cout << "Enter number of students : ";
    cin >> num;

    cout << "Enter information of students: " << endl;

    // storing information
    for (int i = 0; i < num; ++i)
    {
        cout << "Number " << i + 1 << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter class : ";
        cin >> s[i].kaksha;

        cout << "Enter Gender : ";
        cin >> s[i].gender;

        cout << "Enter marks: ";
        cin >> s[i].marks1;

        cout << "Enter marks: ";
        cin >> s[i].marks2;

        cout << "Enter marks: ";
        cin >> s[i].marks3;

        s[i].average = (s[i].marks1 + s[i].marks2 + s[i].marks3) / 3;

        cout << endl;
    }

    cout << "Displaying Student Information : " << endl;

    // Displaying information
    for (int i = 0; i < num; ++i)
    {
        cout << "Name: " << s[i].name << endl;
        cout << "class: " << s[i].kaksha << endl;
        cout << "Gender: " << s[i].gender << endl;
        cout << "marks1: " << s[i].marks1 << endl;
        cout << "marks2: " << s[i].marks2 << endl;
        cout << "marks3: " << s[i].marks3 << endl;
        cout << "average marks:" << s[i].average << endl;
        cout << "Percentage:" << s[i].average << "%" << endl;

        if (s[i].average < 33)
        {
            cout << "Result: Fail "<< endl;
        }
        else
        {
            cout << "Result: Congratulations! You are Pass "<< endl;
        }
        cout << endl;
    }

    return 0;
}