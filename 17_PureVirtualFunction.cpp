//PURE VIRTUAL FUNCTION
//A pure virtual function is a virtual function in C++ for which
//  we need not to write any function definition and only we have to 
//  declare it. It is declared by assigning 0 in the declaration.

// ABSTRACT CLASS
//  An abstract class is a class in C++ which have at least one pure virtual function
// if we have an abstract class we cannot create object from that class

// https://www.youtube.com/watch?v=FA5bvYW4iUc&list=PLfVsf4Bjg79DLA5K3GLbIwf3baNVFO2Lq&index=30

// pure virtual function are also called abstract function
#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
   virtual void introduce()=0;
};
class Student : public Person{
     public:
    void introduce()
    {
        cout<<"Hi from student"<<endl;
    }
    
};

void Person::introduce()

{
    cout<<"Hey from person"<<endl;
}
int main()
{
    Person anjali;
    Student anil;
    anil.introduce();
    Person::introduce();
   
    

}