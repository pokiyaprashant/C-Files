#include <iostream>
using namespace std;
class mid
{
    int a, b;

public:
    void set_val(int c, int d)
    {
        a = c;
        b = d;
    }
    int do_div()
    {
        if (a % b == 0)
            return a / b;
        else
            return 0;
    }
};
int main()
{
    mid obj1;
    obj1.set_val(25, 5);
    cout << "divisible: " << obj1.do_div() << endl;
}