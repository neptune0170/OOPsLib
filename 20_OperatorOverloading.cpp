// Operator overloading is a compile-time polymorphism in
// which the operator is overloaded to provide the special 
// meaning to the user-defined data type. Operator overloading
//is used to overload or redefines most of the operators available in C++.

// These operator can't be overloaded
// Scope operator (::)
// Sizeof
// member selector(.)
// member pointer selector(*)
// ternary operator(?:)
#include<bits/stdc++.h>
using namespace std;
class Marks{
    int intmarks;
    int extmarks;
    public:
    Marks(){
        intmarks=0;
        extmarks=0;
    }
    Marks(int im,int em)
    {
        intmarks=im;
        extmarks=em;
    }

    void display()
    {
        cout<<intmarks<<" "<<extmarks<<endl;
    }
// [Type] operator op/sy + [value ]
    Marks operator  +   (Marks m){
        Marks temp;
        temp.intmarks =intmarks+m.intmarks;
        temp.extmarks=extmarks+m.extmarks;
        return temp;
    }

//DECLARATION
    Marks operator - (Marks m);

};

// [RETURN TYPE] [CLASS Name] :: [operator -] (value)

Marks Marks::operator - (Marks m)
{
       Marks temp;
        temp.intmarks =intmarks-m.intmarks;
        temp.extmarks=extmarks-m.extmarks;
        return temp;
}
int main()
{
    Marks m1(10,20),m2(30,40);
    Marks m3=m1+m2;
    Marks m4=m1-m3;
    m3.display();
    m4.display();

}