#include <iostream>
using namespace std;
void showchoices();
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
    float x, y;
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
            cout << "sum" << add(x, y) << endl;
            break;
        case 2:
            cout << "enter two number:";
            cin >> x >> y;
            cout << "Difference" << subtract(x, y) << endl;
            break;
        case 3:
            cout << "enter two number:";
            cin >> x >> y;
            cout << "Product" << multiply(x, y) << endl;
            break;
        case 4:
            cout << "enter two number:";
            cin >> x >> y;
            cout << "Quotient" << divide(x, y) << endl;
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
    cout << "2:SUBTRACT\n";
    cout << "3:MULTIPLY\n";
    cout << "4:DIVIDE\n";
    cout << "5:EXIT\n";
    cout << "ENTER YOUR CHOICE:";
}
float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    return a / b;
}