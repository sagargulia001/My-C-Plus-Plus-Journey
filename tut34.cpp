// copy constructor

#include <iostream>
using namespace std;

class numbers
{
    int a;

public:
    numbers()
    {
        a = 0;
    };

    numbers(int x)
    {
        a = x;
    }

    // In case no copy constructor is made then compiler provides its own copy constructor
    numbers(numbers &obj)
    {
        cout << "Copy constructor called!!" << endl;
        a = obj.a;
        printnumbers();
    }

    void printnumbers()
    {
        cout << "The number is : " << a << endl;
    }
};

int main()
{
    numbers x, y, z(45), z2; // Copy constructor not called as the objects were declared implicitedly
    x.printnumbers();
    y.printnumbers();
    z.printnumbers();

    z2 = z; //----> Copy constructor not invoked as z2 was already created before, it will simply assign the value of z to z2
    
    //---------------------------------------------------------------
    
    //Copy constructor is called in following cases:
    
    numbers z1(z);

    numbers z3 = z;

    return 0;
}