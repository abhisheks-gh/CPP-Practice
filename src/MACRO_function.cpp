//Function-like macros when combined with conditional operators need to be handled very carefully.

/*#include<iostream>
  using namespace std;
  #define MAX(a,b)
  if (a<b){
     cout<<"Maximum of a & b : "<<b<<endl;
  }
  int main(void){
      if(true)         //Boolean value : true=1 & false=0 
      max(a,b)
  else
      cout<<"Macro failed."<<endl;
  return 0;
  } */

//This will always give the output as "Macro failed." coz the compiler will look at the code as shown below :

/* #include<iostream>
  using namespace std;
  #define MAX(a,b)
  int main(void){
      if (a<b)
      if(true)              //Boolean value : true=1 & false=0 
      max(a,b)
  else
      cout<<"Macro failed."<<endl;
  return 0;
  }
   */
#include<iostream>
using namespace std;
#define MAX(a,b)   ((a<b)?b:a) 
int main(void){
    cout<<"Maximum of 10 & 20 : "<<MAX(10,20)<<endl;
return 0;
}




  


