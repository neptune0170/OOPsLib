 //static variable is stored in data segment and not in stack hence it type of global variable
//  LINE 2 : with limited scope it only works inside a function and call not called outside a function
//   #include<bits/stdc++.h>
//  using namespace std;
//  void display()
//  {
//     static int count=0;
//     cout<<"Display Function called "<<++count<<" times"<<endl;
//  }
//  int main()
//  {
//    display();
//    display();
// // NOTE: LINE 2 DEMONSTRATION
// //    cout<<count;
//  }

 //Static Variable and Member function in a class
//  static variable can be accessed without creating an object
//we have to initalize it outside the class
#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
    //static variable
    static int human_count;
    Human()
    {
        human_count++;
    }
    void humanTotal()
    {
     cout<<"There are "<<human_count<<" people are in this program"<<endl;
    }
    //static function
    static void humanCount()
    {
        cout<<"There are "<<human_count<<" people are in this program"<<endl;

    }
};
int Human::human_count=0;

int main()
{
    
    Human anil;
    Human test;
    //for variable
    anil.humanTotal();
    // for function 
    Human::humanCount();
    cout<<Human::human_count<<endl;

    return 0;
}