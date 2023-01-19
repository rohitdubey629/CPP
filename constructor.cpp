using namespace std;
#include <iostream>

class A
{
public:
    int num;
    int lastValue = 0;
    int product = 1;

    void disp()
    {
        cout << "This is function" << endl;
    }
    void product()
    {
        // int num, lastValue = 0, product = 1;
        cout << "Enter the number" << endl;
        cin >> num;
        while (num > 0)
        {
            lastValue = num % 10;
            product = product * lastValue;
            num = num / 10;
        }
        cout << "the product is :" << product;
    }
    A()
    {
        cout << "This is a constructor" << endl;
    }
};
int main()
{
    A obj;
    obj.disp();
    obj.product();
}