//There are two types of header files:

//1.System header files: It comes with the compiler

#include<iostream>

//2.User defined header files: It is written by the programmer 

//#include"This.h"=== This name file should be in th system directory

//**********go to c++ reference for header files**************
using namespace std;

int main(){
    int a=4,b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    ////    Arithematic operators
    cout<<"********Arithematic Operators*************";
    cout<<"The value of a + b is "<<(a+b)<<endl;
    cout<<"The value of a - b is "<<(a-b)<<endl;
    cout<<"The value of a * b is "<<(a*b)<<endl;
    cout<<"The value of a / b is "<<(a/b)<<endl;
    cout<<"The value of a % b is "<<(a%b)<<endl;
    cout<<"The value of a ++  is "<<(a++)<<endl;
    cout<<"The value of a --  is "<<(a--)<<endl;
    cout<<"The value of ++a  is "<<(++a)<<endl;
    cout<<"The value of --a is "<<(--a)<<endl;

    //   Assignment operstors ---> used to assign values to variables 
    // int a = 4, b= 6;
    //char d='c';

    cout<<"*******Compariosn Operators************\n";
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;

    //*********Logical Operators
    cout<<"*******Logical Operators************\n";
    cout<<"The value of 'and' operator ((a==b) && (a<b)) is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of 'or' operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of 'not' operator (!(a==b)) is "<<(!(a==b))<<endl;
    
    return 0;
}