//GOOD PROGRAMMING PRACTISE --> Define functions or complex inline functions outside the class.

#include<iostream>
class S{
    public:
    int square(int s); //declare the function
};
inline int S::square(int s) //use inline prefix
{ //function code }



//BAD PROGRAMMING PRACTISE --> Define functions or complex inline functions outside the class.

/* #include<iostream>
   class S{
      public:
      int square(int s); //declare the function
  };
  inline int S::square(int s) //use inline prefix
  { //function code }
*/

//If we are writing function definitions(small) inside a class then compiler automatically  treats it as a inline.  

                           