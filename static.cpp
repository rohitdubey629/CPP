using namespace std;
#include <iostream>
#include <conio.h>

// without class
// void text()
// {
// public:
//     static int b = 1;
//     int a = 1;
//     a++;
//     cout << a << endl; // 2 2 2 without static variable
//     b++;
//     cout << b << endl; // 2 3 4  with static variable only one time initialization must be initialization
// }
// int main()
// {
//     text();
//     text();
//     text();
//     return 0;
// }

// without class
class A
{
public:
    static int a;
    int b, c;
    A(int x, int y)
    {
        b = x;
        c = y;
    }
};
int A::a = 100;

int main()
{
    A obj1(2, 3), obj2(4, 5);
    cout << "static variable A obj 1 = " << obj1.a << endl;
    cout << "non static variable b obj 1 = " << obj1.b << endl;
    cout << "non static variable c obj 1 = " << obj1.c << endl;

    cout << "static variable A obj 2= " << obj2.a << endl;
    cout << "non static variable b obj 2 = " << obj2.b << endl;
    cout << "non static variable c obj 2 = " << obj2.c << endl;
    return 0;
}
