#include <iostream>
using namespace std;
class sq
{
    int x;

public:
    sq(int a)
    {
        x = a;
    }
    int get_val()
    {
        return x * x;
    }
};
int main()
{
    sq c1(5);
    cout << "Square of x:" << c1.get_val();
    return 0;
}