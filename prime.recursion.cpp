#include <iostream>
using namespace std;

int main() {
    cout << "even numbers from 1 to 100: " << endl;
    for (int i=1; i<=100; ++i) {
        if(i % 2== 0)
        cout << i << " ";

    }
    cout << "odd numbers from 1 to 100: " << endl;
    for(int i = 1; i <= 100; ++i) {
        if(i % 2 !=0)
        cout << i << " ";

    }
    cout << endl;
    return 0;
}