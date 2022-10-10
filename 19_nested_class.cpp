// Nested class is only available inside a class 
// to access it in main function we can use Person::Address ad;
#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    class Address{
        public:
        string country;
        string stname;
        int hno;
    };
    Address addr;
    void AddressPlease()
    {
        cout<<name<<endl<<addr.country<<endl<<addr.hno<<endl<<addr.stname;
    }
};
int main()
{Person::Address ad;

    Person anil;
    anil.name="anil";
    anil.addr.country="India";
    anil.addr.stname="mac";
    anil.addr.hno=91;
    anil.AddressPlease();


}