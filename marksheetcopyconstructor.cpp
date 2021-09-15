#include <iostream>
using namespace std;
class test
{
    float math;

public:
    test(int n)
    {
        math = n;
        cout << math << endl;
    }
    test(test &newvalue)
    {
        math = newvalue.math;
        cout << math;
    }
    test(test &new)
    {
        math = new.math;
        cout << math;
    }
};

int main()
{
    test bholu(87);
    test chotu(bholu);
    test motu(chotu);
    return 0;
}