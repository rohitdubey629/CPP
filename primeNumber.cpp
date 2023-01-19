using namespace std;
#include <iostream>

class primeNo
{
public:
    void checkPrime()
    {
        int num, f = 0;
        cout << "Enter rhe number";
        cin >> num;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            cout << "This is a prime number" << num;
        }
        else
        {
            cout << "This is a not prime number" << num;
        }
    }
};

int main()
{
    primeNo obj;
    obj.checkPrime();
    return 0;
}