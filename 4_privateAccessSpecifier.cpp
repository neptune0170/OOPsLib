#include<bits/stdc++.h>
using namespace std;
class Human{
   private:
    int age;
   public:
   void displayAge()
   {
    cout<<age<<endl;
   }
   void setAge(int x)
   {
    age=x;
   }
  
  
};
int main()
{
   Human *a=new Human();
   a->setAge(5);
   a->displayAge();
}