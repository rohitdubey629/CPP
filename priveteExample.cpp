using namespace std;
#include <iostream>

class Account
{
private:
    double balance;

public:
    Account(double b)
    {
        balance = b;
    }
    void printBalance()
    {
        int pin;
        cout << "Enter your pin";
        cin >> pin;
        if (pin == 1234)
        {
            cout << "Your total balance is :" << balance << endl;
        }
        else
        {
            cout << "Try again";
        }
    }
};

int main()
{
    Account c1(10000);
    c1.printBalance();
    return 0;
}