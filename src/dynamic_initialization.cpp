#include<iostream>
using namespace std;
int main(){
    int a=5;                 //static initialization
    cout<<"Please enter a value : "; //dynamic initialization 
    //In dynamic initialization, variable is initialized at the run-time by the user
    cin>>a;
    cout<<a; //The static value would be overwritten by the dynamic value.
    return 0;
}
