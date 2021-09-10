#include <iostream>
using namespace std;
class sum
{
    int x;

public:
    void setval()
    {
        cout << "Enter x: ";
        cin >> x;
    }
    int getval()
    {
        return x;
    }
};
int main()
{
    sum obj1[5];
    int i;
    for (i = 0; i < 4; i++)
        obj1[i].setval();
    for (i = 0; i < 4; i++)
        cout << "\nx: " << obj1[i].getval();
    return 0;
}