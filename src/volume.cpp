// Code 2-->C++ source code
#include "volume.h"
#include <iostream>

using namespace std;

int main() {
    int a1, r1, x1, y1;
    
    std::cout << "Enter the sides of cube : " << std::endl;
    std::cin >> a1;
    std::cout << "Volume of cube : " << volume::cube(a1) << "cube units\n";
    std::cout << "\n\n";
    std::cout << "Enter the radius of sphere : \n" << std::endl;
    std::cin >> r1;
    std::cout << "Volume of sphere : " << volume::sphere(r1) << "cube units\n";
    std::cout <<"\n \n";
    std::cout << "Enter the radius and height of cylinder : \n" << std::endl;
    std::cin >> x1 >> y1;
    
    std::cout << "Volume of cylinder : " << volume::cylinder(x1,y1) << "cube units\n";
}
