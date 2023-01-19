using namespace std;
#include <iostream>
class customer
{
public:
    int accNo;
    int amt;
    customer()
    {
        accNo = 101;
        amt = 2000;
    }
};

int main()
{
    customer obj, obj2;
    cout << " Account No is " << obj.accNo << " With amount " << obj.amt << endl;
    cout << " Account No is " << obj2.accNo << " With amount " << obj2.amt;
}