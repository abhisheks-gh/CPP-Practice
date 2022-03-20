//  INSTRUCTIONS:
//  Program using class and objects to display record of 5 students in tabular format.

#include <iostream>
#include <stdlib.h>

using namespace std;

class student {
    public:
       char name[20];
       int roll;
       int BC, EM2, OOP;
};

int main() {
       student st[100];
       int n, i;

       system("CLS");

       std::cout << "\n How Many Students You Want to Enter? : ";
       std::cin >> n;

       for (i = 0; i <= n-1; i ++) {
              cout << "\n Student Name :  ";
              cin >> st[i].name;
              cout << "\n Roll Number  :  ";
              cin >> st[i].roll;
              cout << "\n Marks of Three Subjects ";
              cout << "\n ---------------------";
              cout << "\n BC           :  ";
              cin >> st[i].BC;
              cout << "\n EM2          :  ";
              cin >> st[i].EM2;
              cout << "\n OOP          :  ";
              cin >> st[i].OOP;
              cout << "\n ---------------------------------";
       }

       std::cout << "\n\n\t **** Displaying Student's Details **** \n\n" << " ";
       std::cout << "\n\tStudent's Name"<<"\tRoll Number" << "\tMarks of Three Subjects";
       std::cout << "\n\n\t\t\t\t\tBC  EM2  OOP";

       for (i = 0; i <= n - 1; i++) 0{
              std::cout << "\n\t----------------------------------------------------------";
              std::cout << "\n\t "<<st[i].name<<"\t "<<st[i].roll<<"\t\t "<<st[i].BC<<"\t "<<st[i].EM2<<"\t "<<st[i].OOP;
       }

       std::cin.get();

       return 0;
}