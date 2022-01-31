// Program to calculate the area of rectangle, circle and square using a Area class (Function overloading).

#include <iostream>
#include <stdlib.h>

class Area{

public: 
	int m_ComputeArea(unsigned int Side);                //square
	float m_ComputeArea(float Radius);                   //circle
	double m_ComputeArea(float Length, float Breadth);   //rectangle
};

int Area::m_ComputeArea(unsigned int Side)
{
    std::cout << "Enter the side of square : " << std::endl;
    std::cin >> Side;
	unsigned int Area = Side * Side;
	std::cout << "Area of square : " << Area << std::endl;
    return 0;
}

float Area::m_ComputeArea(float Radius)
{
    std::cout << "Enter the Radius of circle : " << std::endl;
    std::cin >> Radius;
    float Area = 3.14 * Radius * Radius;
	std::cout << "Area of circle : " << Area << std::endl;
    return 0;
}

double Area::m_ComputeArea(float Length, float Breadth)
{
    std::cout << "Enter Length of rectangle : " << std::endl;
    std::cin >> Length;
    std::cout << "Enter Breadth of rectangle : " << std::endl;
    std::cin >> Breadth;
	unsigned int Area = Length * Breadth;
	std::cout << "Area of rectangle : " << Area << std::endl;
    return 0;
}

int main()
{
    std::cout << "Click Enter to start the execution" << std::endl;
    std::cin.get();

    float Radius, Length, Breadth;
    unsigned int Side;
    Area a;
    a.m_ComputeArea(Side);
    a.m_ComputeArea(Radius);
    a.m_ComputeArea(Length, Breadth);

    return 0;
}


