#include <iostream>
using namespace std;
class circle{
private:
    float radius;
public:
    void setradius(float r) {
        radius = r;
    }
    void area() {
        cout << "area: " << 3.14 * radius * radius << endl;
    }
};
int main() {
    circle c;
    c.setradius(5);
    c.area();
    return 0;
}