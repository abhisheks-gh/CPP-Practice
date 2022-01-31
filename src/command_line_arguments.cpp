//Command line arguments
#include<iostream>
using namespace std;
int main(int argc, char*argv[]) //Arguments can be pass directly through main() also.

// We can use any other name insteada argc & argv. But, commonly these two names are used.
{ 
    cout<<"You have entered "<<argc /* argc--> agrument count (shows no. of commands) &
                                       argv--> argument vector (shows list of commands) */
    <<"arguments : "<<"\n";
    for(int i=0;i<argc;++i){
        cout<<argv[i]<<"\n";
        return 0;
    }
}

  //To pass an argument use command --->   .\command
  
  /* Syntax:-
    int main(int argc, char*argv[]){
        _ _ _ _
    } 

          OR

    int main(int argc, char**argv){
        _ _ _ _
    }    */