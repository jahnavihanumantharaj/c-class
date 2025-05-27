#include <iostream>
using namespace std;
class A
{
private:
    int x=5;
    int y=10;
    void greet()
    {
        cout << "greeting" << endl;
    }
    friend void show(A);
};
void show(A obj)
{
    cout <<"value of X:"<< obj.x << endl;
    cout <<"value of Y:"<< obj.y << endl;
    obj.greet();
    
}
int main()
{
    A a;
    show(a);
    return 0;
}
