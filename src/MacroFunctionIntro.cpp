// Function like MACROS (Introduction)

   // WriteToFile is a function. Now, one can use this macro to write the details in the log file along with a message,
   // File name and Line number as depicted below 

/*
     #include <iostream>
     using namespace std;
     
     #define LOG(X) WriteToFile((X),_FILE_,_LINE_)
     
     int main() {
        LOG("Inside Main");
        return 0;
     }
 */

/*
   Macros are generally used to define constant values that are being used repeatedly in program. 
   Macros can even accept arguments and such macros are known as function-like macros. It can be useful if tokens are
   concatenated into code to simplify some complex declarations. The above macro (MAX_SIZE) has a value of 10. 
 */


   #include<iostream>
   using namespace std;
   #define MAX(a,b)       ((a<b)?b:a) //if a<b --> print b otherwise print a
   int main(void){
      cout<<"Maximum of 10 and 20 is "<<MAX("10","20")<<endl;
      return 0;
   }
