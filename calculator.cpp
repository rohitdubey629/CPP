// it is work

// Single Inheritance
using namespace std;
#include <iostream>

class calc
{
public:
    void add(int a, int b)
    {

        cout << "the addition is : " << a << " and " << b << " = " << a + b << endl;
    }
    void sub(int a, int b)
    {

        cout << "the subtraction is : " << a << " and " << b << " = " << a - b << endl;
    }
};
class newCalc : public calc
{
public:
    void mul(int a, int b)
    {
        cout << "the multiplication is : " << a << " and " << b << " = " << a * b << endl;
    }
    void div(int a, int b)
    {

        cout
            << "the division is : " << a << " and " << b << " = " << a / b << endl;
    }
};
int main()
{
    calc obj;
    obj.add(10, 20);
    obj.sub(10, 20);
    newCalc obj1;
    obj1.add(10, 20);
    obj1.sub(20, 30);
    obj1.mul(20, 30);
    obj1.div(20, 30);
    return 0;
}
