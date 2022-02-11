// INLINE FUCNTION (increases the efficiency of the program)
/*SYNTAX :-

inline return-type function-name(parameters){ 
        //function code
}        */


/*When the program executes the function call instructions the CPU stores the memory address of the instruction following
the function call, copies the arguments of the function on the stack and finally transfer control to the specified
function. */

/* Inline function is only a request to compiler not a command. Compiler can ignore the request for inlining if 
1. If a function contains loop.
2. If a function contains static variables.
3.If a function is recursive.
4. If a function return type is other than void, & the return statement doesn't exist in function body.
5. If function contains switch or goto statement.   
  
  NOTE:- Inline functions must not be too long or complex otherwise compiler will reject the request. */

#include<iostream>
using namespace std;
inline int cube(int s){   /*If we are writing function definitions(small) inside a class then compiler automatically
                            treats it as a inline. */
    return s*s*s;
}
inline int inc(int a){     //Large inline cause cashe misses and affect efficiency negatively.   
  return ++a;
}
int main(){
    int a=11;
    cout<<"The volume of cube of 3 is : "<<cube(3)<<"\n";  //Inline function is expanded in line when it is called.
    cout<<"Incrementing a, we get "<<inc(3)<<"\n";
    return 0;
}




                     
