#include <iostream>
using namespace std;

float volume(float a ) {
    return a * a * a;
}

int main() {
    float num1, result;
    
    cout << "enter the number: ";
    cin >> num1;
    
    result = volume(num1  );

    cout << "result: " << result << endl;


}