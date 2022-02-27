// Function-like macros when combined with conditional operators need to be handled very carefully.

/*
  #include <iostream>
  using namespace std;
  
  #define MAX(a,b)
  if (a < b) {
     std::cout << "Maximum of a & b : " << b << std::endl;
  }
  
  int main(void) {
  // Boolean value : true = 1 & false = 0
      if (true)          
        max(a,b)
      else
        std::cout << "Macro failed." << std::endl;
    return 0;
  } 
*/

// This will always give the output as "Macro failed." because the compiler will look at the code as shown below :
/*
  #include <iostream>
  using namespace std;
  
  #define MAX(a,b)
  
  int main(void) {
      if (a < b)
        // Bolean value : true = 1 & false = 0
        if (true)               
          max(a,b)
      else
        std::cout << "Macro failed." << std::endl;
    return 0;
  }
 */

#include <iostream>
using namespace std;

#define MAX(a,b)   ((a < b) ? b : a) 

int main (void) {
    std::cout << "Maximum of 10 & 20 : " << MAX(10,20) << std::endl;
  return 0;
}
