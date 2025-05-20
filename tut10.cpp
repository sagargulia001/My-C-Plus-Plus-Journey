#include<iostream>
using namespace std;

int main(){
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While loop
        3. Do-While loop
    */

    /*    For Loop:      */    
    for(int i = 1;i < 4; i++)
    {cout<<i<<endl;}


    /*    While Loop:      */   
    int a = 1; 
    while(a < 19)
    {cout<<a<<endl;
    a++;}


    /*   Do - While Loop:      */   
    int c = 1; 
    do{
        cout<<(c*6)<<endl;
        c++;
    }while(c <= 10);


    return 0;
}