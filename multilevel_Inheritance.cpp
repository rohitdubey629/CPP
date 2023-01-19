using namespace std;
#include <iostream>
class grandParent
{
public:
    void m1()
    {
        cout << "this is a m1 in grandParent class" << endl;
    }
};
class parent : public grandParent
{
public:
    void m2()
    {
        cout << "this is m2 in parent class" << endl;
    }
};
class child : public parent
{
public:
    void m3()
    {
        cout << "this is m3 in child class" << endl;
    }
};

int main()
{
    grandParent obj2;
    cout << "grandParent class" << endl;
    obj2.m1();
    cout << "Parent class" << endl;
    parent obj1;
    obj1.m1();
    obj1.m2();
    cout << "child class" << endl;
    child obj;
    obj.m1();
    obj.m2();
    obj.m3();
    return 0;
}