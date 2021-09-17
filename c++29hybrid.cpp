
#include <iostream>
using namespace std;
class tata
{
public:
    tata()
    {
        cout << "\n i am Tata , i manufacturing";
    }
};
class battery : public tata
{
public:
    battery()
    {
        cout << "\n batteries";
    }
};
class steel : public tata
{
public:
    steel()
    {
        cout << "\n steel";
    }
};
class nexon : public battery, public steel
{
public:
    nexon()
    {
        cout << "\n are used in nexon";
    }
};
int main()
{
    nexon c1;
}
