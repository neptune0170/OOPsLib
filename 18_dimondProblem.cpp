// The diamond problem The diamond problem occurs when two 
// superclasses of a class have a common base class.
// Now if we try to use method of the most derived class
//then there will be ambiguity to call from which super class

//     ANIMAL
//     /    \ 
//  TIGER   LION
//     \    /
//     LIGER

// THIS PROBLEM CAN BE RESOLVED USING VIRTUAL KEYWORD

#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    void walk(){
        cout<<"Animal Walks"<<endl;
    }
};
class Tiger:virtual public Animal{

};
class Lion:virtual public Animal{

};
class Liger:public Tiger,public Lion{

};
int main()
{
    Liger anil;
    anil.walk();

}