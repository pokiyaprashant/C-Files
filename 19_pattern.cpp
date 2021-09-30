#include <iostream>
using namespace std;
int main()
{
    int i, j,q=40;
    for(i=1;i<=q;i++)
    cout<<" ";
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<"\n";
        
    }
}