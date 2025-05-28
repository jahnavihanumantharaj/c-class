#include <iostream>
using namespace std;

int main(){

    string food = "pizza";
    string *food_address = &food;

    cout << "value of food: " << food << endl;
    cout << "adress of food: " << food_address << endl;

    *food_address = "Biriyani";
    cout << "value of food: " << food << endl;
    cout << "Address of food: " << food_address << endl;
}