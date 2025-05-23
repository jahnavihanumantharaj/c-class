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
    for(int i=0; i<3; i++)
    {
        cout <<"enter the name for"<<i+1<<":"<<endl;
        cin>>name;
        cout<<"enter the pancard"<<i+1<<":"<<endl;
        cin>>pancard;
        cout<<"enter the aadharcard"<<i+1<<":"<<endl;
        cin>>aadharcard;
         list_of_users.push_back(person(name,pancard,aadharcard));
    }

    for(person user:list_of_users)
    {
        user.display_details();
    }


}