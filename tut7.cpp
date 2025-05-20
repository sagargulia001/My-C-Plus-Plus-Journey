#include<iostream>
using namespace std;

int c = 54;
int main(){
    // int a,b,c;

    // ***************Bulit in Data Types***********************

    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The value of sum of a and b is:"<<endl<<c<<endl;
    // cout<<"The value of global c is :"<<::c;
    //--------"::"----> this is the scope resolution operator.It will print the global variable.
    
    //**************Float, doubles and long doubles Literals***********************

    // float d = 34.5f;//we define if a value of is float or double by 
    // //typing small or capital f,F and l,L in the end of the number.
    // long double e = 34.5l;
    // cout<<"The size of 34.5 is "<<sizeof(34.5)<<endl;
    // cout<<"The size of 34.5 is "<<sizeof(34.5f)<<endl;
    // cout<<"The size of 34.5 is "<<sizeof(34.5F)<<endl;
    // cout<<"The size of 34.5 is "<<sizeof(34.5l)<<endl;
    // cout<<"The size of 34.5 is "<<sizeof(34.5L)<<endl;

    //*******************Reference Variables*****************
    // Rohan Das -----> MOnty ---------------> Rohu--------> Dangerous Coder
    // float x = 34.8;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //************TYpecasting***************
    int a = 45;
    float b = 45.67767;
    cout<<"The value of a is = "<< (float)a <<endl;
    cout<<"The integer value of float b is = "<< (int)b <<endl;//or int(b)
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expressiom is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;




    return 0;
}