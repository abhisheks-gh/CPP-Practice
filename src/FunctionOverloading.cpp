// FUNCTION OVERLOADING :- Same name but differnet agruments.
#include <iostream>
using namespace std;

// Same function signature with different return type will not be overloaded.
int add(int, int);
long add(long, long);

// You cannot overload function declarations that differ only by return type.
class function
{
public:
    // The function overloading is basically the compile time polymorphism.
    int add(int x, int y)
    {
        int addition;
        std::cout << "Enter two INT numbers\n";
        std::cin >> x >> y;
        addition = x + y;
        std::cout << "Addition = " << addition << "\n";
        return addition;
    }

    double add(double x, double y)
    {
        double addition;
        std::cout << "Enter two DOUBLE numbers\n";
        std::cin >> x >> y;
        addition = x + y;
        std::cout << "Addition = " << addition << "\n";
        return addition;
    }
    
    long add(long x, long y)
    {
        long addition;
        cout << "Enter two LONG numbers\n";
        cin >> x >> y;
        addition = x + y;
        cout << "Addition = " << addition << "\n";
        return addition;
    }
};

int main() {
    function f;
    int a, b;
    double c, d;
    long x, y;
    f.add(a, b);
    f.add(c, d);
    f.add(x, y);
    return 0;
}
