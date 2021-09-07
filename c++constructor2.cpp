#include <iostream>
using namespace std;
class con
{
    int h, w;

public:
    con(int a, int b)
    {
        h = a;
        w = b;
    }
    int get_x()
    {
        return 0.5 * h * w;
    }
};
int main()
{
    con c1(10, 5);
    cout << "Area Of triangle: " << c1.get_x();
    return 0;
}