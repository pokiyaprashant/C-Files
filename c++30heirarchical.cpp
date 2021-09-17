#include <iostream>
using namespace std;
class tata
{
public:
    tata()
    {
        cout << "\n TATA";
    }
};
class battery : public tata
{
public:
    battery()
    {
        cout << "\tBATTERY";
    }
};
class engine : public tata
{
public:
    engine()
    {
        cout << "\tENGINE";
    }
};
class steel : public tata
{
public:
    steel()
    {
        cout << "\tSTEEL";
    }
};
int main()
{
    battery c1;
    engine c2;
    steel c3;
}