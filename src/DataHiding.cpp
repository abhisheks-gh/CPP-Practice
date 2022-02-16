#include <iostream>

class Base {
    private:
        int num; 
    public:
        void read();
        void print();
};

void Base::read() {
    std::cout << "Enter any Integer value:" << std::endl;
    std::cin >> num;
}

void Base::print() {
    std::cout << "The value you entered is " << num << std::endl;
}

int main() {
    Base obj;

    obj.read();
    obj.print();

    return 0;
}
