#include <iostream>
using namespace std;

class car {
public:
    void show() {
        cout << "car is running." << endl;
    }

};
int main(){
    car* c = new car;
    c->show();
    delete c;
    return 0;
}
