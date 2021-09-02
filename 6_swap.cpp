#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter your a:" << endl;
    cin >> a;
    cout << "enter your b:" << endl;
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "your value a:" << a;
    cout << "your value b:" << b;
}