#include <iostream>
using namespace std;

class Maths {
public:
    virtual void add(int a, int b) = 0;
};

class Calculation : public Maths 
{
public:
    void add(int a, int b) override 
    {
        cout << a + b << endl;
    }
};

int main() 
{
    Calculation c1;
    c1.add(10, 20);
}