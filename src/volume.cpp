//Code 2-->C++ source code
#include "volume.h"
#include<iostream>
using namespace std;
int main(){
    int a1,r1,x1,y1;
    cout<<"Enter the sides of cube : "<<endl;
    cin>>a1;
    cout<<"Volume of cube : "<<volume::cube(a1)<<"cube units\n";
    cout<<"\n\n";
    cout<<"Enter the radius of sphere : \n"<<endl;
    cin>>r1;
    cout<<"Volume of sphere : "<<volume::sphere(r1)<<"cube units\n";
    cout<<"\n \n";
    cout<<"Enter the radius and height of cylinder : \n"<<endl;
    cin>>x1>>y1;
    
    cout<<"Volume of cylinder : "<<volume::cylinder(x1,y1)<<"cube units\n";
}

