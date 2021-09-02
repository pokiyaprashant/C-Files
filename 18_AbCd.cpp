#include <iostream>
using namespace std;
int main()
{
    int i, n;

    for (i = 65; i <= 90; i += 2)
    {
        cout << char(i) << char(i + 33);
    }
}
