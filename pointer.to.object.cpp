#include <iostream>
using namespace std;

class book {
public:
    void showtitle() {
        cout << "c++ programming" << endl;
    }
};
int main()
{
    book b;
    book* ptr = &b;
    ptr->showtitle();
    return 0;
}