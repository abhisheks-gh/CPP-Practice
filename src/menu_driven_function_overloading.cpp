// Menu driven program to perform arithmetic operation(addition, subtraction, multiplication) using function overloading
// and classes and objects.

//   MENU DRIVEN PROGRAMS :-   
//--> A program that obtains input from a user by displaying a list of options – the menu – from which the user indicates
//    his/her choice. 

//--> Systems running menu-driven programs are commonplace, ranging from microprocessor controlled washing machines to
//    bank cash dispensers.


//        FUNCTION OVERLOADING :- Same function name but differnet agruments. 
//                          -->   Same function signature with different return type will not be overloaded.
//                          -->   You cannot overload function declarations that differ only by return type.  
//                          -->   The function overloading is basically the compile time polymorphism.  

#include<iostream>
using namespace std;
class art
 {
 public:
 int operation (int a, int b)
 {
 return (a+b);
 }
 
 int operation (float a, int b)
 {
 return (a-b);
 }
 double operation (int a, float b)
 {
 return (a*b);
 }
 float operation (float a, float b)
 {
 return (a/b);
 }
 };
int main ()
 {
 art x;
 int a,b,c,d,n;
 float e,f,g,h;
 char ch;
 do
 {
 cout<<"\n\tChoose From The Following Operations \n" ;
 cout<<"1) ADD\n2) Subtraction\n3) Multiplication\n4) Division\n";
 cout<<"\nEnter youer choice : ";
 cin >> n;
 switch (n)
 {
 case 1:
 cout << "Enter the 2 Numbers";
 cout << "\nA = ";
 cin >> a;
 cout << "B = ";
 cin >> b;
 cout <<"A + B = " << x.operation(a,b)<< endl; break;
 case 2:
 cout << "Enter the 2 Numbers";
 cout << "\nA = ";
 cin >> e;
 cout << "B = ";
 cin >> c;
 cout <<"A - B = " << x.operation(e,c)<< endl;
 break;
 
 case 3:
 cout << "Enter the 2 Numbers";
 cout << "\nA = ";
 cin >> d;
 cout << "B = ";
 cin >> f;
 cout <<"A * B = " << x.operation(d,f)<< endl;
 break;
 
 case 4:
 cout << "Enter the 2 Numbers";
 cout << "\nA = ";
 cin >> g;
 cout << "B = ";
 cin >> h;
 cout <<"A / B = " << x.operation(g,h)<< endl;
 break;
 
 default:
 cout << "ERROR Wrong Choice\n";
 break;
 
 }
 cout << "Do you want to continue (Y/N) = ";
 cin >> ch;
 }while (ch == 'y' || ch == 'Y');
     return 0;
 }