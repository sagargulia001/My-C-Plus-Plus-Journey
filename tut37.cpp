#include <iostream>
using namespace std;

class employee //------> Base class
{

public:
    int id;
    float salary;

    employee() {}
    employee(int x, float y = 100)
    {
        id = x;
        salary = y;
    }

    void print()
    {
        cout << "The salary of employee with employee id " << id << " is " << salary << endl;
    }
};

// Derived class syntax:
/*
class {{derived-class-name}} : {{visibility-mode(private or public)-----By deafult its private}} {{base-class-name}}
{
    class members/methods/etc...
}
*/

// Creating a programmer class derived from employee class:
class Programmer : public employee
{
public:
    int languagecode = 9;
    Programmer(int x, float y = 1000)
    {
        id = x;
        salary = y;
    }
    void getdata()
    {
        cout << "The salary of employee with employee id " << id << " is " << salary << endl;
    }
};

/*
Note:
1. Default visibility mode is private
2. Public visibility Mode: Public memebers of the base class becomes Public members of the derived class
3. Private visibility mode: Public memebers of the base class becomes private members of the derived class
4. Private members of the base class are not inherited


*/
int main()
{
    employee divya(2), vishwas(3, 50);
    divya.print();
    vishwas.print();

    Programmer sagar(1);
    sagar.getdata();
    sagar.print();
    cout<<sagar.languagecode<<endl;
    return 0;
}