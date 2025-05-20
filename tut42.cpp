#include <iostream>
using namespace std;

/*

Protrcted members -------> Which we can inherit but can't access
For protected members:
                        Public derivation   Private Derivation  Protected Derivation
1. Private members      Not inherited       Not inherited       Not inherited
2. Protected members    Protected           Private             Protected
3. Public members       Public              Private             Protected

multiple inheritance : A ---> B,    C ---> B
Syntax:

class derived-class-name : visibility-mode base1, vsibility-mode base2
{
Class body of derived 'C'
};

*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2{
    public:
    void show(){
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The sum of Base1 and Base2 is "<<base1int + base2int<<endl;
    }
};

int main()
{
    Derived x;
    x.set_base1int(5);
    x.set_base2int(10);
    x.show();
    return 0;
}