#include <iostream>
using namespace std;
int main()
{
    char op;
    int a,b;
    cout<<"enter 2 numbers:"<<endl;
    cin>>a>>b;
    cout<<"enter the operation: %,*"<<endl;
    cin>>op;
    switch(op)
    {
        case '%':
        cout<<a%b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        defaul1t:
    cout<<"invalid operator";
    break;
    }
}