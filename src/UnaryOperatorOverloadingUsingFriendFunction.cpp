
// INSTRUCTIONS :-

// Implement program using operator overloading.
// b) overload '-' operator using friend funciton (Unary operator)

#include <iostream>
using namespace std;

class UnaryFriend {
    int a = 10;
    int b = 20;
    int c = 30;

public:
    void getvalues() {
        std::cout << "Values of A, B & C\n";
        std::cout << a << "\n"
             << b << "\n"
             << c << "\n"
             << std::endl;
    }
    void show() {
        std::cout << a << "\n"
             << b << "\n"
             << c << "\n"
             << std::endl;
    }
    void friend operator-(UnaryFriend &x);        //Pass by reference
};

void operator-(UnaryFriend &x) {
    x.a = -x.a;                   //Object name must be used as it is a friend function
    x.b = -x.b;
    x.c = -x.c;
}
int main() {
    UnaryFriend x1;
    x1.getvalues();
    std::cout << "Before Overloading\n";

    x1.show();
    std::cout << "After Overloading \n";

    -x1;
    x1.show();

    return 0;
}
