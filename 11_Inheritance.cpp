// The capability of a class to derive properties and characteristics from another class is called Inheritance. 
//read more ->https://www.geeksforgeeks.org/inheritance-in-c/https://www.geeksforgeeks.org/inheritance-in-c/
#include<bits/stdc++.h>
using namespace std;
class Person{ //Base Class
    public:
    string name;
    int age;
    void setName(string iname){
        name=iname;
    }
    void setAge(int iage){
       age=iage;
    }

};
// [class] [NEW class Name] :access specifiers [BASE CLASS]
class Student:public Person{ //DERIVED CLASS
//  PUBLIC CLASS 
 //all the public member of person class will act as public member of
 //student class
 //The protected member will be act as protected member in student class
 

 //PROTECTED CLASS 
//  class Student:Protected Person
//  now the public and protected member of Person class will act as a protected member of the student class
// and they will not be able to access setname function 
//  To fix this we can create new set name type function in student class that can access its base class member

    public:
    int id;
    void setId(int iid){
        id=iid;
    }
    void introduce()
    {
        cout<<"Hi i am "<<name<<" My age is "<<age<<" mystudent id is "<<id<<endl;
    }
  //PRIVATE Class
// -> public private protected member of the base class act as private member of derived class
};
int main()
{
    Student anil;
    anil.setName("Anil");
    anil.setAge(24);
    anil.setId(1012);

    anil.introduce();
    return 0;
}