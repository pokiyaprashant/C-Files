#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter character: " << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "small : " << char(ch + 32);
    }
    else
    {
        cout << "Capital : " << char(ch - 32);
    }
}