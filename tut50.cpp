#include<iostream>
using namespace std;

int main(){
    int a = 60;
    // auto b = &a;
    int* b = &a;

    cout<<"The value of a is "<<a<<endl
        <<"The value of a is "<<*b<<endl;
    
    //New keyword :
    int* p = new int(50);
    cout<<"The value of new integer is "<<*p<<endl;
    return 0;
}   