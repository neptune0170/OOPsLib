#include<bits/stdc++.h>
using namespace std;
class Human
{
   private:
   string *name;
   int *age;
   public:
   Human(string iname,int iage)
   {
      name=new string();
      age=new int();

      *name=iname;
      *age=iage;
   }
   void display()
   {
    cout<<"Hi i am"<<*name<<" and my age is "<<*age<<endl;
   }
   ~Human()
   {
    delete name;delete age;cout<<"Memory released";
   }

};
int main()
{
    Human*anil=new Human(" anil",23);
    anil->display();
    delete anil;
    
}