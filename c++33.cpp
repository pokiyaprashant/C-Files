#include <iostream>
#include <string.h>
using namespace std;
int m1, m2, m3, n1, n2, n3, m, n;
string name;

class SEM1
{
private:
public:
    void info()
    {
        cout << "Student Name:" << endl;
        cin >> name;
        cout << "Enter The 3 Subject Of Sem1 Marks:" << endl;
        cin >> m1 >> m2 >> m3;
    }
};

class SEM2
{
private:
public:
    void infor()
    {
        cout << "Enter The 3 Subject Of Sem2 Marks:" << endl;
        cin >> n1 >> n2 >> n3;
    }
};

class student : public SEM1, public SEM2
{
private:
    int m, n;

public:
    int total1()
    {

        return m1 + m2 + m3;
    }
    int total2()
    {

        return n1 + n2 + n3;
    }
    void total()
    {

        cout << "Total Of Sem 1: " << total1();
        cout << "Total Of Sem 2: " << total2();
    }
};
int main()
{
    student x;
    x.info();
    x.infor();
    x.total();
}