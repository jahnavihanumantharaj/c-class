#include <iostream>
using namespace std;
class person
{
    private:
    string name;
    int age;
    
    public:
       void setName(string n)

       {
        name=n;
        
        }
        
        string getName()
        {
            return name;
            
        }
       void setAge(int a) 
       {
        age=a;

       }
       int getAge()
       {
        return age;
       }



};
int main()
{
    person p1;
    p1.setName("sinchana");
    cout<<p1.getName()<<endl;
    p1.setAge(18);
    cout<<p1.getAge()<<endl;

}