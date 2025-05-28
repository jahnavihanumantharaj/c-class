#include <iostream>
using namespace std;
class person {
    public:
        string name = "default name";

        person (string name)
        {
            this->name = name;
        }
        void print()
        {
            cout << name << endl;
        }
};
int main()
{
    person p1("jaansagar");
    p1.print();

}