#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

int swap(int &a, int &b){     //This will not swap the value of a and b.      
    int temp = a;           
    a = b;           
    b = temp;
}           
int main(){           
    int x = 4, y = 5;           
    // cout<<"The sum of 4 and 5 is"<<sum(a,b);           
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;           
    swap(x,y);           
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;           
    return 0;
}