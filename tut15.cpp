#include<iostream>
using namespace std;

// Function prototype 
// type function- type ( argument )
//  int sum (int a, int b, int c); // --->Acceptable
//  int sum (int a, b, c); // --->Not Acceptable
//  int sum (int, int, int); // --->Acceptable

int sum(int,int,int);
void g();

int main(){
    int num1, num2, num3; 
    cout<<"Enter first number:";
    cin>>num1;cout<<endl;
    cout<<"Enter second number:";
    cin>>num2;cout<<endl;
    cout<<"Enter third number:";
    cin>>num3;cout<<endl;
    cout<<"The sum is "<<sum(num1, num2, num3); 
    g();

    return 0;
// Formal Parameters a and b will be taking values from actual parameters num1 and num2.
//Formal parameters are defined by the user while num1 num2 num3 are the actaul parameters.



}
int sum(int a, int b, int c){
int d = a+b+c;
return d;
}
void g(){
    cout<<"\nHello, Good Morning";
}