#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>
using namespace std;
class emi
{
    float i, b, c, p, r, t, e, a[500], o[1000], s[1000], newbal[1000], m[1000];
    string name;

public:
    void getdata();
    void showdata();
    void showdata1();
    double calculate_emi();
    int t_payable();
    int i_payable();
    double paidinterest();
    double newbalance();
};
void emi::getdata()
{
    cout << "\n\tENTER YOUR NAME... ";
    cin >> name;
    cout << "\n\tENTER THE LOAN AMOUNT... ";
    cin >> p;
    cout << "\n\tENTER RATE OF INTEREST... ";
    cin >> r;
    cout << "\n\tENTER THE TIME IN YEAR... ";
    cin >> t;
}

void emi::showdata()
{

    cout << "\n\tCUSTOMER NAME : " << name << endl;
    cout << "\tYOUR MOTHLY EMI..." << calculate_emi() << endl;
    cout << "\tYOUR PAYABLE AMOUNT..." << t_payable() << endl;
    cout << "\tYOUR INTEREST PAYABLE..." << i_payable() << endl;

    cout << "\nYOU HAVE TO PAY " << t << "INSTALLMENT CONTINUOUSLY....." << endl;

    int i = 1;
    while (i <= t)
    {

        cout << "\n\tEnter your " << i << "EMI: ";
        cin >> a[i];
        s[i] = (r * p);
        o[i] = a[i] - s[i];
        newbal[i] = p - (a[i] - s[i]);

        cout << "\n\tMonth\tBeginning Balance\tEMI\tPrinciple\tMonthly Interest\tNew Balance\n";
        cout << "" << setw(11) << i << "" << setw(15) << p << "" << setw(17) << a[i] << "" << setw(13) << o[i] << "" << setw(19) << s[i] << "" << setw(22) << newbal[i] << endl;

        p = newbal[i];
        i++;
    }
}

void emi::showdata1()
{

    cout << "\n\tMONTH\tBEGINNING BALANCE\tEMI\tPRINCIPLE\tMONTHLY INTEREST\tNEW BALANCE\n";
    cout << "\t-------------------------------------------------------------------------------------------\n";
    int i = 1;
    while (i <= t)
    {

        cout << "" << setw(11) << i << "" << setw(15) << p << "" << setw(17) << a[i] << "" << setw(13) << o[i] << "" << setw(19) << s[i] << "" << setw(22) << newbal[i] << endl;

        p = newbal[i];
        i++;
    }
}
double emi::calculate_emi()
{
    r = r / (12 * 100);
    t = t * 12;
    e = (p * r * pow(1 + r, t)) / (pow(1 + r, t) - 1);
    return e;
}
int emi::t_payable()
{
    b = e * t;
    return b;
}
int emi::i_payable()
{
    c = b - p;
    return c;
}

int main()
{
    emi z;

    z.getdata();
    z.showdata();
    z.showdata1();
}