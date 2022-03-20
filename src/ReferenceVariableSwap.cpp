// Implement program using reference variable,class & objects for swapping of two numbers.

#include <iostream>
using namespace std;

class interchange {
public:
    void swapno(int &a , int &b , int x) {
        x = a;
        a = b;
        b = x;
    }
};

int main() {
    int a, b, x;
    std::cout << "First Number = ";
    std::cin >> a;
    std::cout << "Second Number = ";
    std::cin >> b;

    interchange ab;
    ab.swapno(a,b,x);
    std::cout << "(After Swapping) = " << a;
    std::cout << "\n(After Swapping) = " << b;

    return 0;
}
