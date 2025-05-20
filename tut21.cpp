#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);     //Declaration
        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
}sagar;

void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    // Employee sagar;
    // sagar.a = 123  --> This does not work as a is a private data.
    sagar.d = 89;  // d and e are public so we can access them through here
    sagar.e = 12;
    sagar.setData(1,2,3);// a , b , c , are private so we can only access them through a function within the class.
    sagar.getData();
    return 0;
}