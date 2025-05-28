#include <iostream>
using namespace std;

class person
{
    public:
    string name;

    void setname(){
        cout << "enetr the name:" << endl;
        cin >> name;
    }

    void getname() {
        cout << name << endl;
    }
};
int main()
{
    person *listofpeoples = new person[3];
    for(int i = 0; i < 3; i++) {
        listofpeoples[i].setname();
    }
    for (int i = 0; i < 3; i++) {
        listofpeoples[i].getname();
    }
}