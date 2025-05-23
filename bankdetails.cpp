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
    vector <person> list_of_users;
    list_of_users.push_back(person("user1","PCARD1234","ACARD!@#$"));
    list_of_users.push_back(person("user2","PCARD1234","ACARD!@#$"));
    list_of_users.push_back(person("user3","PCARD1234","ACARD!@#$"));
    for(person user:list_of_users)
    {
        user.display_details();
    }

}
    
