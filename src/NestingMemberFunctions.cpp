#include <iostream>
using namespace std; 

class add {
    public:
        void get();
        void display();
};
    void add::get() {
        int x,y;
        std::cout << "Enter x and y\n";
        std::cin >> x >> y;
        display();
    }

    void add::display() {
        int z;
        std::cout << "z = ", z;
    }

    int main() {
        add ob;
        
        ob.get();
        ob.display();

        return 0;
    }
