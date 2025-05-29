#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 0;
    try
    {
        if (b == 0)
            throw "division by zero!";
        cout << "result: " <<  a/b << endl;

    }
    catch (const char *msg)
    {
        cout << "error: " << msg << endl;
    }
    
    


}