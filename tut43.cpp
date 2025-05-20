#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class derived_base3 : public base1, public base2{
    public: 
    void greet(){
        base1 :: greet();
    }
};

class B{
    public:
    void say(){
        cout<<"Hey"<<endl;
    }
};

class D: public B{
    public:
    // void say(){
    //     cout<<"Hey, how was your day?"<<endl;
    // }
};

int main()
{
    base1 x;
    x.greet();
    
    base2 y;
    y.greet();

    derived_base3 z;
    z.greet();

    B a;
    a.say();

    D b;
    b.say();

    return 0;
}