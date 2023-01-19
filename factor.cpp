using namespace std;
#include <iostream>

class factor
{
public:
    void checkFactor()
    {
        int num;
        cout << "Enter the integer number";
        cin >> num;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                cout << "This is factor of " << num << " is " << i << endl;
            }
        }
    }
};

int main()
{
    factor obj;
    obj.checkFactor();
    obj.checkFactor();
    return 0;
}