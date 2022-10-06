#include<bits/stdc++.h>
using namespace std;
class Person{
 public:
 void introduce()
 {
    cout<<"Hi I am a Person"<<endl;
 }
};
class Student:public Person{
    public:
     void introduce()
    {
        cout<<"Hi I am a Student"<<endl;
    }
};
int main()
{
    Student anil;
    anil.introduce();
    //To use overridden base class method by derived class object 
    // we have to do this
    anil.Person::introduce();

}