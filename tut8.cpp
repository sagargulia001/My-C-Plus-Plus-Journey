#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 5;
    // a = 7;//we can change the value of a variable by giving it a new value
    // cout<<"The value of a was "<<a<<endl;
    // a = 46;
    // cout<<"The value of a is "<<a;
    
    // --------Constants in C++---------------
    // const int a = 3;//We can't change the value of a. It is used so that no one can change the value of a in the program later
    // cout<<"The value of a was "<<a;
    // a = 45;
    // cout<<"The value of a is "<<a;

    // Manipulators in C++------->
    // int a = 54534, b = 43, c = 332;
    // cout <<"The value of a without setw is "<<a<<endl;
    // cout <<"The value of a without setw is "<<b<<endl;
    // cout <<"The value of a without setw is "<<c<<endl;

    // cout <<"The value of a with setw is "<<setw(5)<<a<<endl;
    // cout <<"The value of a with setw is "<<setw(5)<<b<<endl;
    // cout <<"The value of a with setw is "<<setw(5)<<c<<endl;

    // Operator Precdence:Which type of operator is first operated like multiplication before addition.
    int a = 3, b = 5;
    int c = ((((a*7)+b)-47)+87);
    cout<<c;



    return 0;
}