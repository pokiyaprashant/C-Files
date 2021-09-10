#include <iostream>
using namespace std;
class test
{
    int x, y, p, q, r, g;

public:
    void getvalue();
    int gst();
    int total();
    int totalwithgst();
    int printx();
    int printy();
    int printp();
    int printq();
};

void test::getvalue()
{
    cout << "enter your product:";
    cin >> x;
    cout << "enter your qantity:";
    cin >> y;
    cout << "enter your rate:";
    cin >> p;
    cout << "enter your gst:";
    cin >> q;
}
int test::gst()
{

    return (q * 0.01 * y * p);
}

int test::totalwithgst()
{
    return (q * 0.01 * y * p) + (y * p);
}
int test::printx()
{
    return x;
}
int test::printy()
{
    return y;
}
int test::printp()
{
    return p;
}
int test::printq()
{
    return q;
}

int main()
{
    test t;
    t.getvalue();

    cout << "\n\tPDT\tQTY\tRATE\tGST\tG.AMT\tTOTAL\t";
    cout << "\n\t" << t.printx();
    cout << "\t" << t.printy();
    cout << "\t" << t.printp();
    cout << "\t" << t.printq();
    cout << "\t" << t.gst();
    cout << "\t" << t.totalwithgst();
}