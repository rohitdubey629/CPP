using namespace std;
#include <iostream>

class userAccount
{
private:
    int accNo, pin;
    char *name;
    double balance;

public:
    int tpin;
    userAccount(int a, char *n, double b, int p)
    {
        accNo = a;
        name = n;
        balance = b;
        pin = p;
    }
    void checkBalance()
    {
        double amt;

        cout << "Enter your pin : ";
        cin >> tpin;
        if (tpin == pin)
        {
            cout << "Enter amount to withdraw : ";
            cin >> amt;
            if (amt < balance)
            {
                balance = balance - amt;
                cout << "Your current balance is: " << balance;
            }
            else
            {
                cout << "Insufficient balance";
            }
        }
        else
        {
            cout << "Wrong pin Try again";
        }
    }
    void depositAmount(double b)
    {
        balance = b;
        cout << "depositAmount function : " << balance << endl;
    }
    void changePin(int p)
    {
        pin = p;
        cout << "change pin :" << pin << endl;
    }
};
int main()
{
    userAccount c1(1001, "aman", 20000.0, 1111);
    // c1.checkBalance();
    c1.changePin(1234);
    c1.depositAmount(40000);
    c1.checkBalance();
    return 0;
}