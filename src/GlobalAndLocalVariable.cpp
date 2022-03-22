#include<iostream>
using namespace std;

int a = 10; //Global Variable
int main() {
    int a = 5;  //Local variable
    {
        int a=3;
        std::cout << "The  scope value of a is : " << a;
    }
    {
        std::cout << "\nThe value of global a is : " << ::a; 
        // Scope resolution operator is used to acess the value of global variable inside a scope.
    
        std::cout << "\nThe value of local a is : " << a;
    }
    return 0;
}
