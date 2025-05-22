#include <iostream> 
using namespace std;
class person
{
public:
    void hello()
    {
        cout<< "hello" << endl;
    }
private:
    void hello2()
    {
        cout<<"hello 2" << endl;
    }
};
int main()
{
    person p1;
    p1.hello();
    
}