// Destructor is called when we delete an dynamiclly alocated variable
// For destructor to be called we have to use delete keyword
// destructor can't be called for statically allocated variable 

#include<bits/stdc++.h>
using namespace std;
class Human
{
    public:
    Human()
    {
        cout<<"Constructor is called"<<endl;
    }
    ~Human()
    {
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    Human*anil=new Human();
    delete anil;
}