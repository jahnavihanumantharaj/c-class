#include <iostream> 
using namespace std;
class person
{
public:
    void hi();
    void hello();
};
void person::hi()
{
    cout << "hi there" << endl;
}
void person::hello()
{
    cout <<"hello there" << endl;
}
int main()
{
    person p1;
    p1.hi();
    p1.hello();
}