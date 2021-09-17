#include <iostream>
using namespace std;
class tata
{
public:
    tata()
    {
        cout << "\n i am tata , i build";
    }
};
class nexon : public tata
{
public:
    nexon()
    {
        cout << "Nexon EV & Nexon Petrol";
    }
};
int main()
{
    nexon c1;
}