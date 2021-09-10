#include <iostream>
using namespace std;
void showchoices();

class test
{
    int a, b;

public:
    void setval()
    {
        cout <<
    }
};

int test::add()
{
    return a + b;
}

int main()
{
    test pr;
    int x, y;
    int choice;

    do
    {
        showchoices();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter two number:";
            cin >> x >> y;
            cout << "sum : " << pr.add() << endl;
            break;
        case 5:
            break;
        default:
            cout << "Invalid input" << endl;
        }
    } while (choice != 5);
    return 0;
}
void showchoices()
{
    cout << "MENU\n";
    cout << "1:ADD\n";
    cout << "5:EXIT\n";
    cout << "ENTER YOUR CHOICE:";
}
