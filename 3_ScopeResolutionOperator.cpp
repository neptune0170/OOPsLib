//How to define method of a class ouside class defination

#include<bits/stdc++.h>
using namespace std;
class Human{
   public:
   string name;
   void introduce();
};

// :: ->represents scope resolution operator
//  To use scope resolution operator
// [return type]  [Class Name] :: [Member Function]
void Human::introduce()
{
    cout<<"Hello My name is "<<name;
}

// NOTE: We can only initalize member funcitons of the of class
//data member cannot be initalize outside the clas
//for eg (This is wrong)
// string Human::name="Yash";
int main()
{
   Human*anil=new Human();
   anil->name="Anil ";
   anil->introduce();
}