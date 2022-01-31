#include<iostream>
#include "student.h"

using namespace std;

void students::stud::userinput()
{
    cout<<"\nDetail of Students\n";
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter Roll no: "<<endl;
    cin>>roll_no;
    cout<<"Enter PRN: "<<endl;
    cin>>prn;
    cout<<"Enter contact number: "<<endl;
    cin>>contact_no;
}

void students::stud::studentinfo()
{
    cout<<"\n****\n";
    cout<<"Name : "<<name<<endl;
    cout<<"Roll no : "<<roll_no<<endl;
    cout<<"PRN : "<<prn<<endl;
    cout<<"Contact number : "<<contact_no<<endl;
    cout<<"------*\n";
}

int main()
{
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
