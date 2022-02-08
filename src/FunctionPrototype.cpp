#include<iostream>
using namespace std;
int add() //Atleast function declaration is important before calling it into main()
          /* Syntax of function declaration:-
             int add(int a, intb); */
{
    int x,y;
    return x+y;
}
int main(){
    int x,y;
    cout<<"Enter two numbers\n";
    cin>>x>>y;
    cout<<"Addition of "<<x<<" and "<<y<<" is "<<x+y;
    return 0;
}

/*It's good practice to declare function globally before calling it into main()
  as some compilers like turbo C++ will throw an error. */

//Pre-declaration means I(programmer) is gonna call the function in upcoming part of the program.
