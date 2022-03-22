#include <iostream>

using namespace std;

int main() {
    enum Gender {Male, Female};  //Default value of Male & Female are 0 and 1 
    Gender gender = Female;
    switch(gender) {
        case Male:
            std::cout << "Gender is Male";
            break;
        case Female:
            std::cout << "Gender is Female";
            break;
        default:
            std::cout << "Value can be Male or Female";
        return 0;      
    }
}
