#include <iostream>
using namespace std;
class person
{
    public:
    string name;
};
int main()
{
    person list_of_peoples[5];
    list_of_peoples[0].name="user 1";
    list_of_peoples[1].name="user 2";
    list_of_peoples[2].name="user 3";
    for (int i=0; i<5;i++)
    {
        cout<<list_of_peoples[i].name <<endl;
    }
}
