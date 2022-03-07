// Menu driven program to calculate area of square, circle, rectangle and triangle using Inline function and class
// and object.



//   MENU DRIVEN PROGRAMS :-   
//--> A program that obtains input from a user by displaying a list of options – the menu – from which the user indicates
//    his/her choice. 

//--> Systems running menu-driven programs are commonplace, ranging from microprocessor controlled washing machines to
//    bank cash dispensers.



// INLINE FUCNTION (increases the efficiency of the program)


//                 SYNTAX :-

//                 inline return-type function-name(parameters)
//                 {//function code}    


// /*When the program executes the function call instructions the CPU stores the memory address of the instruction following
// the function call, copies the arguments of the function on the stack and finally transfer control to the specified
// function. */


//  NOTE:- Inline functions must not be too long or complex otherwise compiler will reject the request. 

#include <iostream>
using namespace std;
class area
 {
 public: 

 // If we are writing function definitions(small) inside a class then compiler automatically treats it as a inline.

 // Large inline cause cashe misses and affect efficiency negatively.    

 inline float sq_area(float a) 
 {
 return a*a;
 }

 inline float circle_area(float r)
 {
 return 3.14*r*r;
 }

 inline float rect_area(float l, float b)
 {
 return l*b;
 }

 inline float triangle_area(float b, float h)
 {
 return 0.5*b*h;
 }

 };

int main()
 {
 area x;
 int n;
 char ch;
 float a,b,c,d,e,f;

 do
 {
 cout<<"\n\tChoose From The Following Shapes to find the Area \n" ;
 cout<<"1) Square\n2) Circle\n3) Rectangle\n4) Triangle\n";
 cout<<"\nEnter youer choice : ";
 cin >> n;

 switch (n)
 {
 case 1: cout << "Enter the Side of Square = ";
 cin >> a;
 cout << "Area of Square = " << x.sq_area(a) << endl;
 break;
 
 case 2:
 cout << "\n\nEnter the Radius of Circle = ";
 cin >> b;
 cout << "Area of Circle = " << x.circle_area(b) << endl;
 break;
 
 case 3:
 cout << "\n\nEnter the Length of Rectangle = ";
 cin >> c;
 cout << "Enter the Breadth of Rectangle = ";
 cin >> d;
 cout << "Area of Rectangle = " << x.rect_area(c,d) << endl;
 break;
 
 case 4:
 cout << "\n\nEnter the Base of Trinagle = ";
 cin >> e;
 cout << "Enter the Height of Triangle = ";
 cin >> f;
 cout << "Area of Triangle = " << x.triangle_area(e,f) << endl;
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

