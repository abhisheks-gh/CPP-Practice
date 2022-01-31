#include<iostream>
using namespace std;
class add{
    private:
    int x,y,z;     //private data members 
    void get();    //private member function
    public:
    void display();   //public member function
};
void add::get(){
    cout<<"Enter x and y";
    cin>>x>>y;
    z=x+y;
}
void add::display(){
    get(); /* As get() is private member function & we can't acess it outside the class. So, we use another 
              public member function to acess it outside the class. */
    cout<<"z = ",z;
}
int main(){
    add ob; 
    ob.display(); 
    return 0;
}
