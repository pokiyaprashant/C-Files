#include <iostream>
using namespace std;
class con
{
    int x;

public:
    con(int a)
    {
        x = a;
    }
    int get_x()
    {
        return 3.14 * x * x;
    }
};
int main()
{
    con c1(5);
    cout << "Area Of Circle: " << c1.get_x();
    return 0;
}