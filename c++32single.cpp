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
private:
    int s1;
    int s2;
    int s3;

public:
    void getmarks();
    void putmarks();
    //void process();
    //void printresult();
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


int main()
{
    marks x;
    x.read();
    x.getmarks();
    x.display();
    x.putmarks();
    
    return 0;
}