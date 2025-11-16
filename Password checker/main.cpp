#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string pass;

    cout<<"Enter password: ";
    getline(cin, pass);

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;
    bool hasSpace = false;

    for(char ch : pass)
    {
        if(isupper(ch)) hasUpper = true;
        else if(islower(ch)) hasLower = true;
        else if(isdigit(ch)) hasDigit = true;
        else if(isspace(ch)) hasSpace = true;
        else hasSpecialChar = true;
    }

    if (pass.length() >= 8 && hasUpper && hasLower && hasDigit && hasSpecialChar && !hasSpace)
    {
        cout << "Strong password" << endl;
    }
    else
    {
        cout << "Weak password" << endl;
    }

    return 0;
}

