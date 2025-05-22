#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int age;

    person(int person_age, string person_name)
    {
        name = person_name;
        age = person_age;
    }

    void intro()
    {
        cout << "my name is " << name << endl  
             << "my age is "  << age << endl;
    }
};
int main()
{
    person p1(27, "jaansagar");
    person p2(27,"jaahnavisinchana");
    p1.intro();
    p2.intro();
}
