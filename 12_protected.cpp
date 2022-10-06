// Protected member will be allowed to access from the same class
//or from the derived class 

#include<bits/stdc++.h>
using namespace std;
class Person{
 protected:
 string name;
 public:
 void setname(string iname){
    name=iname;
 }
 
};
class Student:public Person{
    public:
    void display()
    {
        cout<<name<<endl;
    }
};

int main()
{
    Student anil;
    anil.setname("anil");
    anil.display();
    


}