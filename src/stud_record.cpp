/* Program to print the information of 5 students(name, roll no, PRN, percentage) using class and object.*/
#include <iostream>
#include <cstring>
 
using namespace std;
 
class Student {
    private:
    char name[30];
    int rollNo;
    long prn;
    float percentage;
    char grade;
 
    public:
        Student(const char * name, int rollNo, long prn, float percentage, char grade) //   constructor  
    {
        strcpy(this -> name, name);
        this -> rollNo = rollNo;
        this -> prn = prn;
        this -> percentage = percentage;
        this -> grade = grade;
    }
 
    void show() {
        cout << "Student Details are" << endl;
        cout << "Name " << name << endl;
        cout << "Roll No " << rollNo << endl;
        cout << "PRN " << prn << endl;
        cout << "Percentage " << percentage << endl;
         cout << "Grade " << grade << endl;
    }
 
};
int main() {
     Student student[5] = {
        Student("Abhishek", 1, 2014110867, 69.00,'B'),
        Student("Aryaman", 2, 2014110854, 67.00,'B'),
        Student("Ritik", 3, 2014110853, 68.00,'B'),
        Student("Ramlal", 4, 2014110883, 45.00,'C'),
        Student("Shyamlal", 1, 2014110867, 52.00,'C'),
    };
    for (int i = 0; i <= 4; i++) {
        student[i].show();
    }
 
}