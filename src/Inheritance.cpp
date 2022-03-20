//    INSTRUCTIONS:

//    Implement program using multilevel, multiple and hierarchical inheritance.
//       --> 1. To print records of students using multilevel inheritance.
//       --> 2. To print record of employees using multiple inheritance.
//       --> 3. To print record of person hierarchy using hierarchical inheritance.


#include<iostream>
using namespace std;  

class person {
    public:
        int age;

    void getPersonData() {
        std::cout << "Enter Age : " << std::endl;
        std::cin >> age;
    }
};

class man : public person {
    public: 
        string name;

    void getManData() {
        std::cout << "\nEnter Name : " << std::endl;
        std::cin >> name;
    }
};

class employee {
    public:
        float salary;

    void getEmployeeData() {
        std::cout << "\nEnter Salary(in Lakhs) : " << std::endl;
        std::cin >> salary;
    }
};

class student : public man, public employee {
    public:
        int marks;

    void getStudentData() {
        std::cout << "\nEnter Marks : " << std::endl;
        std::cin >> marks;
    }
};

int main() {
    student obj;
    obj.getPersonData();
    obj.getManData();
    obj.getEmployeeData();
    obj.getStudentData();

    std::cout << "\nAge : " << obj.age << std::endl;
    std::cout << "Name : " << obj.name << std::endl;
    std::cout << "Salary : " << obj.salary << " Lakhs" << std::endl;
    std::cout << "Marks : " << obj.marks << std::endl;

    return 0;
}

