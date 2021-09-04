#include <iostream>
using namespace std;
class mul
{
    int width, height;

public:
    void set_val(int a, int b)
    {
        width = a;
        height = b;
    }
    int do_mul()
    {
        return 0.5 * width * height;
    }
};
int main()
{
    mul obj1;
    obj1.set_val(10, 6);
    cout << "Area of Triangle " << obj1.do_mul() << endl;
}