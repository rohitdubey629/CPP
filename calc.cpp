using namespace std;
#include <iostream>

class calc
{
public:
    int num1, num2, op;

    void sum(int a, int b)
    {
        num1 = a;
        num2 = b;
        op = a + b;
        cout << "the sum is " << op << endl;
    }
    void mul(int a, int b)
    {
        num1 = a;
        num2 = b;
        op = a * b;
        cout << "the multiplication is " << op;
    }
};

int main()
{

    calc obj;
    // cout << "Enter two number";
    obj.sum(10, 20);
    obj.mul(2, 20);
    return 0;
}