#include <iostream>
using namespace std;
class test
{
    float math, phy, chem, roll;

public:
    void getvalue()
    {
        cout << "\nenter roll number:";
        cin >> roll;
        cout << "enter math marks:";
        cin >> math;
        cout << "enter physic mark:";
        cin >> phy;
        cout << "enter chemistry:";
        cin >> chem;
    }
    float t()
    {
        return math + phy + chem;
    }
    float per()
    {
        return (math + phy + chem) / 3;
    }
    int r()
    {
        return roll;
    }
    int m()
    {
        return math;
    }
    int p()
    {
        return phy;
    }
    int c()
    {
        return chem;
    }
};

int main()
{
    test t[10];

    int i;
    for (i = 0; i < 3; i++)
        t[i].getvalue();
    cout << "\n\tRoll\tMATH\tPHY\tCHEM\tTOTAL\tPERCENT\tGRADE\n";
    for (i = 0; i < 3; i++)
    {
        cout << "\t" << t[i].r();
        cout << "\t" << t[i].m();
        cout << "\t" << t[i].p();
        cout << "\t" << t[i].c();
        cout << "\t" << t[i].t();
        cout << "\t" << t[i].per() << endl;
    }
    return 0;
}