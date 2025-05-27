#include <iostream>
using namespace std;
class student
{
 private:
    string name;
    string collage="city enginering collage";
 public:
     student(string n)
    {
        name=n;
    }
    string getcollage()
    {
        return collage;
    } 
    void getdetails()
    {
        cout<<"name:"<< name<<endl;
        cout<<"collage:"<< getcollage()<<endl;
    }

};

int main()
{
    student s1("veena");
    cout<<s1.getcollage()<<endl;
    s1.getdetails();
}
