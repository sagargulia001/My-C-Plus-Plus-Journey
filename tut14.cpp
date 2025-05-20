#include<iostream>
using namespace std;

typedef struct employee //in struct the memory is allocated to every individual
{
    int eId;//struct allocates memory to every defined variable
    char favChar;// 
    float salary;//
} ep;// Typedef helps in making shortcut,now i can use ep in place of struct employee

union money//In union the memory is shared
{
    int rice;//in union we can use one of the defined values 
    char car;//it will overwrite the value of rice if we use car
    float pounds;//it allocates the only maximum memory required by one of these.

};

int main(){
    enum Meal{breakfast, lunch, dinner};//enum gives interger values to its variables
    Meal m1 = lunch;
    cout<<(m1==1);
// It increases the readability of the program;

    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';//if we use more than one variable of union we get the garbage value
    // cout<<m1.rice;

    // ep harry;
    // ep shubham;
    // ep rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;

    return 0;
}