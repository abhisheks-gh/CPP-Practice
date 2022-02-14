//CONSTRUCTORS in C++ :-

/* A constructor is a member function of a class that has the same name as the class name.
-> It helps to initialize the object of a class. It can either accept the arguments or not.
-> It is used to allocate the memory to an object of the class. It is called whenever an instance of the class
   is created.
-> It can be defined manually with arguments or without arguments. There can be many constructors in class. 
-> It can be overloaded but it can not be inherited or virtual. */

 //There is a concept of copy constructor which is used to initialize a object from another object. 
#include <iostream>
using namespace std;
 class Z
{
public:
    // constructor
    Z()
    {
        cout<<"Constructor called"<<endl;
    }
    ~Z()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    Z z1;   // Constructor Called
    int a = 1;
    if (a == 1) 
    {
        Z z2;  // Constructor Called
    }  // Destructor Called for z2
} //  Destructor called for z1 
