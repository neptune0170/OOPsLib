#include<bits/stdc++.h>
using namespace std;
class HumanBeing{
   public:
   string name;
   void introduce()
   {
    cout<<"Hi my name is"<<name<<endl;
   }
 
};
int main()
{
    // Type 1  ->To create object from the class
    // in this type object is store in stack and not on heap and it is static
    HumanBeing anil;  
    
    // Type 2 ->
    // When we use new keyword the object is stored in heap and it will be dynamic
    //  new keyword will return adderess hence we have to use * (pointer) 
    HumanBeing *bunty=new HumanBeing();

// if object is initialize in static way then we use . operator
    anil.name="Anil";
    anil.introduce();
 // if object is initialize in dynamic way then we use ->operator
    bunty->name="Bunty";
    bunty->introduce();

    
}

//STATIC VS DYNAMIC INITALIZATION

// static data are created upon the process Startup.They are initialize upon creation
// Even before the code starts to execute. And they are destroyed upon the process terminaiton.

//Dynamic data are created on demand at certain point during the process execution .
//They are initialize at that time ,too.Likewise they are destroyed on demand (ie. when the
// programer decides they are no longer needed).

//Static data resides in the static data process memory segment. Dynamic data resides on the "HEAP"
//Static data have predefined size. Dynamic data space is allocated using 
//a run time allocator is required.


//dangling pointer

// suppose we intialize a dynamic memory 
// int *p=new int();
// *p=10;
//delete(p);
//  delete[]p;
//  p=NULL;

// we remove p to remove memory leak ,this is a serious problem in servers

// and after that we delte the variable using delete(p)
// delete p will remove the memory but the pointer will point to empty memory this is called dangling pointer
//  we should remove the dangling pointer
//  to remove this we do  delete[]p ; and p=NULL;

//DIFFERENCE BETWEEN MEMORYS HEAP VS STACK -> https://www.youtube.com/watch?v=bbym08gSWvQ
