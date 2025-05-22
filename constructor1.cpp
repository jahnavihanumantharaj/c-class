#include <iostream>
using namespace std;
class person
{
public:
    person()
    {
        cout << "hi from const" << endl;
    }    
    void hello()
    {
        cout << "hi from method" <<endl;
    }
};
int main()
{
    person p1;
    p1.hello();

}