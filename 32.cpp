#include <iostream>
#include <string.h>
using namespace std;
class Airlines
{
    int flightnumber;
    string destination;
    float distance, fuel;
    int calfuel()
    {
        if (distance <= 1000)
            cout << "Fuel will be using 500ltr for travelling ";
        if (distance > 1000 && distance <= 2000)
            cout << "Fuel will be using 1100ltr for travelling ";
        if (distance > 2000)
            cout << "Fuel will be using 2200ltr for travelling ";
        return distance;
    }

public:
    void FEEDINFO()
    {
        cout << "Enter Flight Number:" << endl;
        cin >> flightnumber;
        cout << "Enter Destination:" << endl;
        cin >> destination;
        cout << "Enter Distance:" << endl;
        cin >> distance;
    }
    void SHOWINFO()
    {
        cout << "Your Flight Number:" << flightnumber << endl;
        cout << "Your Destination:" << destination << endl;
        cout << "Your Distance:" << distance << endl;
        cout << " " << calfuel();
    }
};
int main()
{
    Airlines yo;
    yo.FEEDINFO();
    yo.SHOWINFO();
}