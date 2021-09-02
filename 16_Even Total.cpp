#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter number:";
    cin >> n;

    for (i = 0; i <= n; i += 2)
    {
        cout << i << endl;
        sum += i;
    }
    cout << "\nTotal=" << sum;
}
