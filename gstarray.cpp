#include <iostream>
using namespace std;
class test
{
    int x, y, p, q, r, g;

public:
    void getvalue()
    {
        cout << "\nenter your product:";
        cin >> x;
        cout << "enter your qantity:";
        cin >> y;
        cout << "enter your rate:";
        cin >> p;
        cout << "enter your gst:\n";
        cin >> q;
    }
    int gst()
    {

        return (q * 0.01 * y * p);
    }

    int totalwithgst()
    {
        return (q * 0.01 * y * p) + (y * p);
    }
    int printx()
    {
        return x;
    }
    int printy()
    {
        return y;
    }
    int printp()
    {
        return p;
    }
    int printq()
    {
        return q;
    }
};

int main()
{
    test t[10];
    int i;

    for (i = 0; i < 3; i++)
        t[i].getvalue();

    cout << "\n\tPDT\tQTY\tRATE\tGST\tG.AMT\tTOTAL\t";
    for (i = 0; i < 3; i++)
    {
        cout << "\n\t" << t[i].printx();
        cout << "\t" << t[i].printy();
        cout << "\t" << t[i].printp();
        cout << "\t" << t[i].printq();
        cout << "\t" << t[i].gst();
        cout << "\t" << t[i].totalwithgst() << endl;
    }
}