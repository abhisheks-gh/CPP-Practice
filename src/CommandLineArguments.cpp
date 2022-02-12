// Command line arguments

#include <iostream>


// Arguments can be pass directly through main() also
// We can use any other names instead of argc & argv. But, commonly these two names are used.

// argc--> agrument count (shows no. of commands) 
// argv--> argument vector (shows list of commands) 
int main(int argc, char *argv[]) {
    std::cout << "You have entered " << argc << " arguments... \n";
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << "\n";
        return 0;
    }
}

// To pass an argument use command --->   .\command

//  Syntax:-
// int main(int argc, char*argv[]){
//     _ _ _ _
// }

//       OR

// int main(int argc, char**argv){
//     _ _ _ _
// }    
