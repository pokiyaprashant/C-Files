#include <iostream>
using namespace std;
class findage
{
    int age;

public:
    findage(int n)
    {
        age = n;
        cout << "\n constructor called " << age;
    }
    findage(findage &new_age)
    {
        age = new_age.age;
        cout << "\n constructor called " << age;
    }
};
int main()
{
    findage prashant(22);
    findage abhi(prashant);
    return 0;
}