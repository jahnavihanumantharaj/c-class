#include <iostream>
using namespace std;
class person{
    public:
    string name;
    person(string user_name)
    {
        name=user_name;
        cout<<"object constructed:"<<name<<endl;
    }
    ~person()
    {
        cout<<"object destructed:"<<name<<endl;
    }
};
int main()
{
    person p1("veena");
    person p2("sinchana");
}