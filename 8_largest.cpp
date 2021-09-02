#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "your number a & b & c:" << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "larger is a: " << a;
    }
    else
    {
        if (b > a && b > c)
        {
            cout << "larger is b:" << b;
        }
        else
        {
            cout << "larger is c:" << c;
        }
    }
}