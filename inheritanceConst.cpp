using namespace std;
#include <iostream>

class A
{
public:
    A()
    {
        cout << "this is parent constructor" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "this is child constructor";
    }
};

int main()
{
    B obj;
}