#include <iostream>
using namespace std;

float area(float l, float b) {
    return l * b;
}

int main() {
    float num1, num2, result;

    cout << "enter first number: ";
    cin >> num1;

    cout << "enter second number: ";
    cin >> num2;
    result = area(num1, num2);

    cout << "result:" << result << endl;
}