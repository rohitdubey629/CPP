using namespace std;
#include <iostream>

class A
{
public:
    void m1()
    {
        cout << "this is m1 in A class" << endl;
    }
    void m2()
    {
        cout << "this is m2 in A class" << endl;
    }
};
class B : public A
{
public:
    void m3()
    {
        cout << "this is m3 in B class ";
    }
};

int main()
{
    B obj;
    obj.m1();
    obj.m2();
    obj.m3();
    return 0;
}
