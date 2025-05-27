#include <iostream>
using namespace std;
class Math {
public:
     int multiply(int a, int b) {
        return a * b;
     }
     float multiply(float a, float b) {
        return a * b;
     }
     int multiply(int a, int b, int c) {
        return a * b * c;
     }
};
int main() {
    Math m;
    cout << m.multiply(2, 3) << endl;
    cout << m.multiply(2.5f, 4.0f) << endl;
    cout << m.multiply(2, 3, 4) << endl;
    return 0;
}
