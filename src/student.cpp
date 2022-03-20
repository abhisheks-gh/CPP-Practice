#include <iostream>
#include "student.h"

using namespace std;

void students::stud::userinput() {
    std::cout << "\nDetail of Students\n";
    std::cout << "Enter name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter Roll no: " << std::endl;
    std::cin >> roll_no;
    std::cout << "Enter PRN: " << std::endl;
    std::cin >> prn;
    std::cout << "Enter contact number: " << std::endl;
    std::cin >> contact_no;
}

void students::stud::studentinfo() {
    std::cout << "\n****\n";
    std::cout << "Name : " << name << std::endl;
    std::cout << "Roll no : " << roll_no << std::endl;
    std::cout << "PRN : " << prn << std::endl;
    std::cout << "Contact number : " << contact_no << std::endl;
    std::cout << "------*\n";
}  

int main() {
    students::stud s1;
    s1.userinput();
    s1.studentinfo();

    students::stud s2;
    s2.userinput();
    s2.studentinfo();

    students::stud s3;
    s3.userinput();
    s3.studentinfo();

    return 0;
}
