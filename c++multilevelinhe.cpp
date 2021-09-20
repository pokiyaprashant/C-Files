#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
    int r1;
    char nm[20];

public:
    void read();
    void display();
};
class marks : public student
{
protected:
    int s1;
    int s2;
    int s3;

public:
    void getmarks();
    void putmarks();
};
class result : public marks
{
private:
    int t;
    float p;
    char div[10];

public:
    void process();
    void printresult();
};
void student::read()
{
    cout << "enter roll no:";
    cin >> r1;
    cout << "enter name:";
    cin >> nm;
}
void student::display()
{
    cout << "\nroll no:" << r1 << endl;
    cout << "name:" << nm << endl;
    cout << "\n";
}
void marks::getmarks()
{
    cout << "enter mark for 3 subject:" << endl;
    cin >> s1 >> s2 >> s3;
}
void marks::putmarks()
{
    cout << "subject 1:" << s1 << endl;
    cout << "subject 2:" << s2 << endl;
    cout << "subject 3:" << s3 << endl;
}
void result::process()
{
    t = s1 + s2 + s3;
    p = t / 3.0;
    p >= 60 ? strcpy(div, "first") : p >= 50 ? strcpy(div, "second")
                                             : strcpy(div, "third");
}
void result::printresult()
{
    cout << "Total= " << t << endl;
    cout << "\n";
    cout << "Percentage=" << p << endl;
    cout << "Division=" << div << endl;
}
int main()
{
    result x;
    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();
    return 0;
}