using namespace std;
#include <iostream>

int main()
{
    int a, b, c, t;
    cout << "Enter three number";
    cin >> a >> b >> c;
    t = a < b ? a : b;
    if (t < c)
    {
        cout << "Smallest number is=" << t;
    }
    else
    {
        cout << "Smallest number is=" << c;
    }
    return 0;
}