// Function overloading is a feature of object-oriented 
// programming where two or more functions can have the same
// name but different parameters. When a function name is overloaded
// with different jobs it is called Function Overloading. 

// This is contructor overloading
#include<bits/stdc++.h>
using namespace std;
class Human{
    int age;
    string name;
    public:
    Human()
    {
        cout<<"Default Constructor"<<endl;
        age=0;
        name="No Name";
    }
    Human(int age)
    {
        cout<<"Constructor with age as the parameter"<<endl;
        this->age=age;
        name="No Name";


    }
    Human(string n)
    {
        cout<<"Constructor with name as the parameter"<<endl;
        name=n;
        age=0;
      
    }
    Human(int a,string n)
    {
        cout<<"Constructor with name and age as the parameter"<<endl;
        name=n;
        age=a;
    }
    void display();
};
void Human::display()
{
    cout<<name <<" "<< age<<endl;

}
int main()
{ 
    Human anil(19,"Gaeg");
    anil.display();
    
}
// Overloading vs Overriding

// Function Overloading (achieved at compile time)
// It provides multiple definitions of the function by changing 
// signature i.e changing number of parameters, change datatype
//  of parameters, return type doesn’t play anyrole. 

// Function Overriding (achieved at run time)

// It is the redefinition of base class function in its derived 
//class with same signature i.e return type and parameters. 
// It can only be done in derived class.
// Function overriding is a concept using which we define two functions
//  with the same name and same parameters with a condition that one function
//  must present in a base class and other function in a derived class.

//DIFFERENCE ->https://prepinsta.com/c-plus-plus-theory/difference-between-function-overloading-and-function-overriding-in-cpp/