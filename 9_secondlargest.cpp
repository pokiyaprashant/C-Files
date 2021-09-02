#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "your number a & b & c:" << endl;
    cin >> a >> b >> c;
    if (a > b && a > c && b > c)
    {
        cout << "middle is b: " << b;
    }
    else if (a > b && a > c && c > b)
    {
        cout << "middle is c: " << c;
    }
    else if (b > a && b > c && a > c)
    {
        cout << "middle is a: " << a;
    }
    else if (b > a && b > c && c > a)
    {
        cout << "middle is a: " << c;
    }
    else if (c > a && c > b && a > b)
    {
        cout << "middle is a: " << a;
    }
    else if (c > a && c > b && b > a)
    {
        cout << "middle is b: " << b;
    }
}