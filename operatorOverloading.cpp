using namespace std;
#include <iostream>
#include <stdio.h>

class Complex
{
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int x, int y)
    {
        real = x;
        img = y;
    }
    void show()
    {
        cout << real << "+" << img << "i" << endl;
    }
    Complex operator+(Complex obj)
    {
        Complex tem;
        tem.real = real + obj.real;
        tem.img = img + obj.img;
        return tem;
    }
};

int main()
{
    Complex c1(5, 7);
    Complex c2(4, 8);
    cout << "First Complex Number : ";
    c1.show();
    cout << "Second Complex Number : ";
    c2.show();
    Complex c3;
    c3 = c1 + c2;
    cout << "Result : ";
    c3.show();
    return 0;
}