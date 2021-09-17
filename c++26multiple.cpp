#include<iostream>
using namespace std;
class battery
{
    public:
    battery()
    {
        cout<<"\n Battery";
    }
};
class steel
{
    public:
    steel()
    {
        cout<<"\tSteel";
    }
};
class engine
{
    public:
    engine()
    {
        cout<<"\tand Engine";
    }
};
class camry : public battery,public steel,public engine
{
    public:
    camry()
    {
        cout<<"\t are used in Camry";
    }
};
int main()
{
    camry c1;
}