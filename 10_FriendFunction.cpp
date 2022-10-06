//Friend Function
//The private and protected memeber of a class is only accessible inside the class
// To access the the private protected member of the class outside the class we have to 
//use Friend Function
#include<bits/stdc++.h>
using namespace std;
class Human{
  string name;
  int age;
  public:
  void tellMe()
   {
    cout<<name<<endl<<age<<endl;
   }
   void setMe(int age,string name)
   {
    this->age=age;
    this->name=name;
    
   }
   //we have to initalize friend Function inside a class
   friend void display(Human man);

   //to make another class as a friend of this class we make this change
   //friend class [className]
};

void display(Human man)
{
    cout<<man.name<<endl<<man.age<<" "<<endl;
}
 

int main()
{
    Human anil;
    anil.setMe(19,"Anil");
    display(anil);
    return 0;
}