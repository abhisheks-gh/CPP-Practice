//    INSTRUCTIONS :-

//    Implement program using multilevel, multiple and hierarchical inheritance.
//       --> 1. To print records of students using multilevel inheritance.
//       --> 2. To print record of employees using multiple inheritance.
//       --> 3. To print record of person hierarchy using hierarchical inheritance.


#include<iostream>
using namespace std;
class person
{
    public:
    int age;

    void getPersonData()
    {
        cout<<"Enter Age : "<<endl;
        cin>>age;
    }
};

class man : public person
{
    public: 
    string name;

    void getManData()
    {
        cout<<"\nEnter Name : "<<endl;
        cin>>name;
    }
};

class employee
{
    public:
    float salary;

    void getEmployeeData()
    {
        cout<<"\nEnter Salary(in Lakhs) : "<<endl;
        cin>>salary;
    }
};

class student : public man, public employee
{
    public:
    int marks;

    void getStudentData()
    {
        cout<<"\nEnter Marks : "<<endl;
        cin>>marks;
    }
};

int main()
{
    student obj;
    obj.getPersonData();
    obj.getManData();
    obj.getEmployeeData();
    obj.getStudentData();

    cout<<"\nAge : "<<obj.age<<endl;
    cout<<"Name : "<<obj.name<<endl;
    cout<<"Salary : "<<obj.salary<<" Lakhs"<<endl;
    cout<<"Marks : "<<obj.marks<<endl;

    return 0;
}

