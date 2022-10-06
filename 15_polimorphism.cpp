//Polimorphism means many forms,it occurs when there is herariche of 
//of classes and they are related by inheritance
//c++ Polimorphism means that A call to or member function will cause
//different function to be executed depending on the type of object
// that invokes the function

//video 28 +virtual https://www.youtube.com/watch?v=R5qd8X64szs&list=PLfVsf4Bjg79DLA5K3GLbIwf3baNVFO2Lq&index=28

#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
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
