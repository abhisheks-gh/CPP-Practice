// CALL BY REFERENCE 

// In call by reference, original value is modified because we pass reference(address).
// Here, address of the value is passed in the function, so actual and formal arguments shares the same address space.
// Hence, value inside the function, is reflected inside as well as outside the function.

// Note:  To understand the call by reference, we must have the basic knowledge of pointers.

// Here is an program using the concpt of call by reference. 

#include <iostream>


void swap(int *x, int *y) {  
    int swap;  
    swap = *x;  
    *x = *y;  
    *y = swap;  
}  


int main() {    
    int x = 500, y = 100;    
  
    // passing value to function
    swap(&x, &y); 
  
    std::cout << "Value of x is: " << x << std::endl;  
    std::cout << "Value of y is: " << y << std::endl; 
  
    return 0;  
} 
