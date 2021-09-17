#include <iostream>
using namespace std;
class apple
{
    int id;
    string name;

public:
    void put_data(int i, string n)
    {
        id = i;
        name = n;
    }
    void get_data()
    {
        cout << "ID: " << id << endl;
        cout << "NAME: " << name;
    }
};
int main()
{

    apple p;
    int p_id;
    string p_name;

    cout << "enter your id: " << endl;
    cin >> p_id;

    cout << "enter your name: " << endl;
    cin >> p_name;

    p.put_data(p_id, p_name);
    p.get_data();
    return 0;
}
