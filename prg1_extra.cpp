#include <iostream>
using namespace std;
class test
{
    int admno;
    float eng, math, science;
    string sname;

public:
    void takedata()
    {
        cout << "enter admno:";
        cin >> admno;
        cout << "\nenter sname:";
        cin >> sname;
        cout << "\nenter eng:";
        cin >> eng;
        cout << "\nenter math:";
        cin >> math;
        cout << "\nenter science:";
        cin >> science;
    }
    int ctotal()
    {
        return eng + math + science;
    }
    void showdata()
    {

        cout << "\nyour admno:" << admno;
        cout << "\nyour sname:" << sname;
        cout << "\nyour eng:" << eng;
        cout << "\nyour math:" << math;
        cout << "\nyour science:" << science;
        cout << "\nTOTAL:"
             << ctotal() << endl;
    }
};

int main()
{
    int i;
    test p[5];
    for (i = 0; i < 2; i++)
    {
        cout << "\nthis is the student for= "
             << i << endl;
        p[i].takedata();
        p[i].ctotal();
        p[i].showdata();
    }
}