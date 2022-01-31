#include<iostream>
using namespace std;
class add{
    public:
    void get();
    void display();
    };
    void add::get()
    {
        int x,y;
        cout<<"Enter x and y\n";
        cin>>x>>y;
        display();
    }
    void add::display(){
        int z;
        cout<<"z = ",z;
    }
    int main(){
        add ob;
        ob.get();
        ob.display();
        return 0;
    }

