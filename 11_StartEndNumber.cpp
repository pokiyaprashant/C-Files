#include <iostream>
using namespace std;
int main()
{
    int a, b, i;
    cout << "enter your number a: & b: ";
    cin >> a >> b ;
    if (b > a)
    {
        for (i = a; i <= b; i++)
        {
            cout << i << endl;
        }
    }
    else
    {
        for (i = a; i >= b; i--)
        {
            cout << i << endl;
        }
    }
}