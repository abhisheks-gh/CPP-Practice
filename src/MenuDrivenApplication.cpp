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

class art {
 public:
  int operation (int a, int b) {
 return (a+b);
 }
 
 int operation (float a, int b) {
 return (a-b);
 }
 
 double operation (int a, float b) {
 return (a*b);
 }
 
 float operation (float a, float b) {
 return (a/b);
 }
 };


int main () {
 art x;
 int a,b,c,d,n;
 float e,f,g,h;
 char ch;
 
 do {
 std::cout<<"\n\tChoose From The Following Operations \n" ;
 std::cout<<"1) ADD\n2) Subtraction\n3) Multiplication\n4) Division\n";
  
 std::cout<<"\nEnter youer choice : ";
 std::cin >> n;
 switch (n) {
 case 1:
  std::cout << "Enter the 2 Numbers";
  std::cout << "\nA = ";
  std::cin >> a;
  std::cout << "B = ";
  std::cin >> b;
  std::cout <<"A + B = " << x.operation(a,b)<< std::endl; 
  break;
   
 case 2:
  std::cout << "Enter the 2 Numbers";
  std::cout << "\nA = ";
  std::cin >> e;
  std::cout << "B = ";
  std::cin >> c;
  std::cout <<"A - B = " << x.operation(e,c)<< std::endl;
  break;
 
 case 3:
  std::cout << "Enter the 2 Numbers";
  std::cout << "\nA = ";
  std::cin >> d;
  std::cout << "B = ";
  std::cin >> f;
  std::cout <<"A * B = " << x.operation(d,f)<< std::endl;
  break;
  
 case 4:
  std::cout << "Enter the 2 Numbers";
  std::cout << "\nA = ";
  std::cin >> g;
  std::cout << "B = ";
  std::cin >> h;
  std::cout <<"A / B = " << x.operation(g,h)<< std::endl;
  break;
 
 default:
  std::cout << "ERROR Wrong Choice\n";
  break;
 }
  
 std::cout << "Do you want to continue (Y/N) = ";
 std::cin >> ch;
 } while (ch == 'y' || ch == 'Y');
     return 0;
 }
