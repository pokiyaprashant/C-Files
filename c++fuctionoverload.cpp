#include <iostream>
using namespace std;
class area
{
public:
    void findarea(double a)
    {
        cout << "\n circle area: " << 3.14 * a * a;
    }
    void findarea(double b, double h)
    {
        cout << "\n triangle area: " << 0.5 * b * h;
    }
};
int main()
{
    area obj1;
    obj1.findarea(2);
    obj1.findarea(2, 4);
    return 0;
}