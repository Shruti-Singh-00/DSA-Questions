// Count number of vowals consonants and space.
#include <iostream>
#include <string>
using namespace std;

void hello();

int main()
{
    int vowal = 0;
    int consonant = 0;
    int space = 0;

    string str;
    cout << "Enter a string" << endl;
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117 || str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85)
        {
            vowal = vowal + 1;
        }
        else if (str[i] == 32)
        {
            space = space + 1;
        }
        else
        {
            consonant = consonant + 1;
        }
    }
    int count = (consonant - space);
    cout << "Number of vowals : " << vowal << endl;
    cout << "Number of consonant : " << consonant << endl;
    hello();
    return 0;
}

void hello(){
    cout << "Hello" << endl;
}