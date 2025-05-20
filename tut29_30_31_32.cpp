#include <iostream>
using namespace std;

class students
{
    string Name;
    string Class;
    int Roll_No;

public:
    students(string x, int z = 0, string y = "B.tech")

    /* Here y is a default constructor which have default value if no value is given but,
    it will change when we pass a third value to the constructor.

    Deafult constructors are put in last.
    For example we can't put x after y cause x is not default constructor */

    // parameterized constructor -- Accepts parameters to be passed
    {
        Name = x;
        Class = y;
        Roll_No = z;
    }

    students(void) // non parameterized constructor -- Do not accept parameters to be passed
    {
        Name = "None";
        Class = "B.Tech";
        Roll_No = 00;
    }

    void print_details()
    {
        cout << Name << " is a student of " << Class << " and have roll no. " << Roll_No << endl;
    }
};

int main()
{
    students a = students("Sagar", 10, "B.Phar"); // implicit call

    students b("Vishwas", 27); // explicit call
    
    a.print_details();
    b.print_details();

    return 0;
}