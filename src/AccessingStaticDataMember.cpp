// Acessing static data member with the help of static member function.

#include <iostream>
using namespace std;

class Demo
{
private:
    static int x;

public:
    static void fun()
    {
        cout << "Value of x : " << x << endl;
    }

    // A static data member can be acessed through the class name without using the static member function
    // (as it's a class member), here we need a scope resolution operator(SRO) :: to acess static data
    // member without using static member funtion.
};

// Syntax--> className::staticDataMember;
int Demo::x = 10; 

int main()
{
    Demo x;
    x.fun();
    return 0;
}
