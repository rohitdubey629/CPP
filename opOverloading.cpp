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
        cout << real << "+" << img << endl;
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
    int real1, real2, img1, img2;
    cout << "Enter two real number";
    cin >> real1 >> real2;
    cout << "Enter two imaginary number";
    cin >> img1 >> img2;
    Complex c1(real1, real2);
    Complex c2(img1, img2);
    cout << "First 2D Number : ";
    c1.show();
    cout << "Second 2D Number : ";
    c2.show();
    Complex c3;
    c3 = c1 + c2;
    cout << "Result : ";
    c3.show();
    return 0;
}