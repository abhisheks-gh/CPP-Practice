
//       INSTRUCTIONS :-

//       Implement program using operator overloading.
//        a) overload '-' operator using member function (Unary operator)

#include <iostream>
using namespace std;

class space
{
    int x;
    int y;
    int z;

public:
    void getData(int a, int b, int c);
    void display(void);
    void operator-();            // overload unary minus
};

void space ::getData(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void space ::display(void)
{
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";
    cout << "z = " << z << "\n\n\n";
}

void space ::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    space obj;
    obj.getData(10, 20, 30);

    cout << "obj : \n";
    obj.display();

    obj.operator-();

    -obj;                   // activating operator -() function
    cout << "-obj : \n";
    obj.display();

    return 0;
}
