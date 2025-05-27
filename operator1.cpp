#include <iostream>
using namespace std;
class point {
public:
    int x, y;
    
    point(int a, int b) {
        x = a;
        y = b;
    }
    point operator-(point p) {
        return point(x - p.x, y - p.y);
    }
    void show() {
        cout << x << ", " << y << endl;
    }
};

int main() {
    point p1(1, 2);
    point p2(2, 3);
    point p3 = p1 - p2;
    p3.show();
}