#include <iostream>
using namespace std;

int main()
{
    float *number1 = new float(5.123f);
    float *number2 = new float();
    *number2 = 6.567f;

    cout << *number1 << endl;
    cout << *number2 << endl;


}