#include <iostream>
using namespace std;
class tata
{
public:
    tata()
    {
        cout << "\n i am tata , i manufacturing";
    }
};
class battery : public tata
{
public:
    battery()
    {
        cout << "\tbattery";
    }
};
class nexon : public battery
{
public:
    nexon()
    {
        cout << "\twhich is used in Nexon";
    }
};
int main()
{
    nexon c1;
}