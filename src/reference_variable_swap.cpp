/*Implement program using reference variable,class & objects
  for swapping of two numbers. */
#include <iostream>
using namespace std;

class interchange
    {
        public:
         void swapno(int &a , int &b ,int x)
                {
                    x=a;
                    a=b;
                    b=x;
                }
    };

int main()
    {
        int a,b,x;
        cout << "First Number = ";
        cin >> a;
        cout << "Second Number = ";
        cin >> b;
        interchange ab;
        ab.swapno(a,b,x);
        cout << "(After Swapping) = " << a;
        cout << "\n(After Swapping) = " << b;
        return 0;
    }
