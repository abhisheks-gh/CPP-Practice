#include<iostream>
using namespace std;


class Base {
    int num;  //by default private
    public:
     void read();
     void print();
};
  
void Base :: read() {
    cout<<"Enter any Integer value"<<endl; 
    cin>>num;
}
  
void Base :: print() {
    cout<<"The value is "<<num<<endl;
}
  
int main() {
    Base obj;
     
    obj.read();
    obj.print();
     
    return 0;
}
