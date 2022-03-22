#include <iostream>  
using namespace std;  

int main() {  
 unsigned long int a = 0, b = 1, c;
 unsigned short int i, num;    
 std::cout << "Enter num : " << std::endl;    
 std::cin >> num;    
 std::cout << a << " " << b << " " << std::endl;
 for (i = 2; i < num; ++i) 
 {    
  c = a + b;   
  std::cout << c << " ";    
  a = b;   
  b = c;    
 }    
   return 0;  
}
