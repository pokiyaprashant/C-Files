#include<iostream>
using namespace std;
class findage{
    int age;
    public:
    findage(int n)
    {
        age=n;
        cout<<"enter first's age : "<<endl;
        cin>>age;
        cout<<"\n\tUmang's age: "<<age;

    }
    findage(findage &newage)
    {
        age=newage.age;
        cout<<"\n\tKevin's age: "<<age;
    }
};
int main()
{
    findage umang(18);
    findage Kevin(umang);
}