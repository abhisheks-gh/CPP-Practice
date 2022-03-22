// Program to find whether the entered day is weekday or weekend using enum datatype.

#include <iostream>

int main() {
    enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; 
    enum Day today;
    int x;

    std::cout << "Please enter the day of the week(0 to 6)\n";
    std::cin >> x;  

    x = today;  

    if (today == Sunday || today == Saturday)   
        std::cout << "Finally! It's the weekend\n";
    else
        std::cout << "Week day. Get back to work!\n";
        
    return 0;
}
