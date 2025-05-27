#include <iostream>
#include <vector>
using namespace std;
class person
{
    public:
    string name;
    string pancard_number;
    string aadharcard_number;
    person(string user_name,string p_card,string a_card)
    {
        name= user_name;
        pancard_number=p_card;
        aadharcard_number=a_card;

    }
    void display_details()
    {
        cout <<"user details"<<endl;
        cout <<"username:"<<name<<endl;
        cout <<"pancard:"<<pancard_number<<endl;
        cout <<"aadharcard:"<<aadharcard_number<<endl;
    }
};
int main()
{
    string name, pancard ,aadharcard;
    vector<person>list_of_users;
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
            cout<<"create account:"<<endl;ee
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
        