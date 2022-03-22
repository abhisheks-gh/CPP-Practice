#include<iostream>
using namespace std;

int main() {
    int a = 5;                 // static initialization
    std::cout << "Please enter a value : ";     // dynamic initialization 
    //In dynamic initialization, variable is initialized at the run-time by the user
    std::cin >> a;
    std::cout << a;     // The static value would be overwritten by the dynamic value.
    
    return 0;
}
