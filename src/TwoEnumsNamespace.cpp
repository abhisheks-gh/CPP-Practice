// Program containing two enums using namespace. 

#include <iostream>
using namespace std;

int main() {
    enum Gender {Male, Female};
    enum Gender2 {M, F};
    Gender gender = Male;
    Gender2 gender2 =F;
    std::cout << gender << std::endl;
    return 0;
}
