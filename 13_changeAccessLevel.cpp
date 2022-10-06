#include<bits/stdc++.h>
using namespace std;
class Person{
    protected:
     string name;
    public:
     void setName(string iname)
     {
        name=iname;
     }
};
class Student:private Person{
    public:
    using Person::name;
    using Person::setName;
    void display()
    {
        cout<<name<<endl;
    }
    void studentSetName(string iname)
    {
        setName(iname);
    }
};
int main()
{
    Student anil;
    // we can't access name funtion as it is privately inherited
    // to make it public later we have to use [using Person::name;] in student 
    // public member place
    
    // [using Person::name;]
    // using this we change the access level or scope of the member
    anil.name="anil";
    anil.display();


}