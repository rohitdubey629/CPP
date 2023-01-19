using namespace std;
#include <iostream>

class factorial
{
public:
    void checkFactorial()
    {
        int num, f = 1;
        cout << "Enter the number";
        cin >> num;
        for (int i = 1; i <= num; i++)
        {
            f = f * i;
        }
        cout << "This is a factorial : " << f;
    }
};

int main()
{
    factorial obj;
    obj.checkFactorial();
    return 0;
}