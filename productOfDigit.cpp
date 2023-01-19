using namespace std;
#include <iostream>
#include <conio.h>

class productOfDigit
{
public:
    void product()
    {
        int num, lastValue = 0, product = 1;
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
};

int main()
{
    productOfDigit obj;
    obj.product();
    return 0;
}