#include <iostream>
using namespace std;
int main()
{
    int options;
    while(true)
    {
        cout<<"choose the option:"<<endl;
        cout<<"1. create account:"<<endl;
        cout<<"2.list all the users:"<<endl;
        cout<<"3.exist the program:"<<endl;
        cin>>options;
        switch(options)
        {
            case 1:
            cout<<"create account:"<<endl;
            break;
            case 2:
            cout<<"listing all the accounts:"<<endl;
            break;
            case 3:
            cout<<"exiting the program:"<<endl;
            break;
            default:
            break;
        }

    }
}    
        
        

    

    

