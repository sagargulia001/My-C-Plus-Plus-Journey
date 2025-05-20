#include<iostream>
using namespace std;

class base1
{
int data1;
public:
    // base1(){}
    base1(int a){
        data1 = a;
        cout<<"base1 constructor is called."<<endl;
    }
};

class base2
{
public:
    // base2(){}
    base2(int b){
        cout<<"base2 constructor is called."<<endl;
    }
};

class derived_base3 : public base1, public base2{
    int data3,data4;
    public:
        derived_base3(int a,int b,int c,int d):base1(a),base2(b){
            data3 = c;
            data4 = d;
            cout<<"derived class constructor is called."<<endl;
        }
};

//  Initialization list:

class test{
    int a,b;
    public:
        test(int i,int j) : a(i), b(j){
            cout<<"The constructor has been executed and the values of a and b are "<<a<<" and "<<b<<endl;
        }
};


int main(){
    derived_base3 derived(1,2,3,4);
    int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    test my(a,b);
    return 0;
}