#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter your number:" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Even-" << i << endl;
        }
        else
        {
            cout << "Odd-" << i << endl;
        }
    }
}
