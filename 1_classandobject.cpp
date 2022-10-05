// What is a Class?

//For example human has action talks and walk and has activity name,sex, height 
//if can combine both activity and action then it will be very easy to right programs
//A class is a user defined data type which allow activity and action to group together
//Class -> is a blue print of a data type
//Object -> Object is a real world scnerio or an entity
//object is the variable of a class , it is used to call the function of a class.
//Object is runtime variable of a class
// code

#include<bits/stdc++.h>
using namespace std;
class HumanBeing{

    public: // public is a Access specifier this means all the data memeber and fuction
    // of this class can be access inside of this class and outside of this class.

    string name="gaess";
    void display()
    {
        cout<<"Hello my name is "<<name<<endl;
    }
};


int main()
{
    HumanBeing Yash;
    Yash.name="Yash";
    Yash.display();
    return 0;

}