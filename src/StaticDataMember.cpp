/* Difference b/w data members & static data members:-
1. Only a single copy of static data members are used by all the objects.
2. It can be used within the class but it's lifetime is the whole program.
3. For making a data member static, we require :-
   a. Declare it within the class.
   b. Define it outside the class.

Syntax:-

Class student{
    static int count; \\declaration within class
    -----------
}
int student::count=0;  \\definition outside class

  */
#include<iostream>
using namespace std;
class student{
    static int count;
    public:
      static void showcount(void) //static member function
      {
          std::cout << "count = " << count << "\n";
      } 
};

int student::count=0; /*It is called by using the name of the class rather than calling the name of the object.
                         For eg.
                          -->  student::showcount()
                          -->    int student::count=0;
                         */
