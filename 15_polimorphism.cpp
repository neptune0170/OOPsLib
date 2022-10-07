//Polimorphism means many forms,it occurs when there is herariche of 
//of classes and they are related by inheritance
//c++ Polimorphism means that A call to or member function will cause
//different function to be executed depending on the type of object
// that invokes the function

// here 
// whosThis function calls differnt function depending on the object of the class

//video 28 +virtual https://www.youtube.com/watch?v=R5qd8X64szs&list=PLfVsf4Bjg79DLA5K3GLbIwf3baNVFO2Lq&index=28

#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
     virtual 
    void introduce()
    {
        cout<<"Hey from person"<<endl;
    }
};
class Student:public Person{
    public:
    void introduce()
    {
        cout<<"Hey from student"<<endl;
    }
};
class Farmer:public Person 
{ 
    public:
    void introduce()
    {
        cout<<"Hey from Farmer"<<endl;
    }
};
void whosThis(Person &p)
{
    p.introduce();
}
int main()
{
    Farmer anil;
    Student alex;
    whosThis(anil);
}

//When we pass whosThis function it calls  person class 
//but it should call the same introduce method as the class
//To me this function works in differnt forms we have to use the 
//Virtual Functions ->Virtual Functions are the function in the 
//base class defined with a keyword virtual with another function in
//derived class signals to the compiler that we don't want static 
//linkage for this function or when we pass an object of the derived
//class I don't want to call the method in the base class if that method
// is overriden in the derived class


