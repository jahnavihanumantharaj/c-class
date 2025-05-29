#include <iostream>
using namespace std;


float areaoftriangle(float b, float h ) {
    return 0.5 * b * h;
}
float areaofrectangle(float l, float b) {
    return l * b;
}
float areaofcircle(float r) {
    return 3.14 * r * r;
}
float areaofsquare(float a,float b) {
    return a * a;
}

int main() {
    float fullarea = areaoftriangle(12,5) + areaofsquare(10,10);
    float subarea = areaofrectangle(3,7) + areaofcircle(2) + areaoftriangle(3,2);
    cout << fullarea-subarea << endl;
}