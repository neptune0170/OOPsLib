//Constructor
//A constructor is a special Function which has no data type and has
//a same name as a class. A constructor is called when we create object
// of a class .Constructor is used to initalize the properties of a class
#include<bits/stdc++.h>
using namespace std;
class Human{
   
   private:
   string name;
   int age;
   public:

   Human()
   {
    name="No Name";
    age=0;
    cout<<"Constructor is called when we create an object"<<endl;
   }
   void display()
   {
    cout<<name<<" "<<age;
   }
};
int main()
{
    Human anil;
    anil.display();
}

