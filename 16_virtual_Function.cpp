//When a virtual function is inherited its virtual nature is also inherited
// this means that its derived class is inherited a virtual function is itself 
// used as a base class for another derived class , the virtual function can still
// be overridden
// in other words
// No matter how many times virtual function is inherited it remains virtual
#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
   virtual void introduce()
    {
        cout<<"Hi from person"<<endl;
    }
};
class Student : public Person{
     public:
    void introduce()
    {
        cout<<"Hi from student"<<endl;
    }
    
};

class GStudent : public Student{
     public:
    void introduce()
    {
        cout<<"Hi from Gstudent"<<endl;
    }
    
};
void  whosThis(Person &p)
{
    p.introduce();
}
int main()
{
    Person anil;
    Student anjali;
    GStudent yash;
    whosThis(anil);
    whosThis(anjali);
    whosThis(yash);
    

}