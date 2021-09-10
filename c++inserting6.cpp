#include <iostream>
using namespace std;
class test
{
    int x, y;

public:
    void getvalue();
    int sum();
    int mul();
};
void test::getvalue()
{
    cout << "enter your x:";
    cin >> x;
    cout << "enter your y:";
    cin >> y;
}
int test::mul()
{
    return x * y;
}
int test::sum()
{
    return x + y;
}
int main()
{
    test t;
    t.getvalue();
    cout << "\nyour sum:" << t.sum();
    cout << "\nyour mul:" << t.mul();
    return 0;
}