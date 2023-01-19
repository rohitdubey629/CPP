using namespace std;
#include <iostream>

int main()
{
    string uName;
    // int passWord;
    string passWord;
    cout << "Enter username";
    cin >> uName;
    if (uName == "iics")
    {
        cout << "Enter password";
        cin >> passWord;
        if (passWord == "12345")
        {
            cout << "Login Successfully";
        }
        else
        {
            cout << "Invalid password";
        }
    }
    else
    {
        cout << "Invalid username";
    }
    return 0;
}