using namespace std;
#include <iostream>

class parent1
{
public:
    void m1()
    {
        cout << "this is m1 in parent1 class" << endl;
    }
};
class parent2
{
public:
    void m2()
    {
        cout << "this is m2 in parent2 class" << endl;
    }
};
class child : public parent1, public parent2
{
public:
    void m3()
    {
        cout << "this is m3 in  child class" << endl;
    }
};
int main()
{
    child obj;
    obj.m1();
    obj.m2();
    obj.m3();
    return 0;
}