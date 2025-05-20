#include<iostream>
using namespace std;

int main(){//---------Arrays---------//       Arrays are continuous blocks of memory that stores data.
    int marks[4] = {23, 45, 56, 89};//or marks[] also works
    // int mathmarks[4];
    // mathmarks[0] = 2240;
    // mathmarks[1] = 40;
    // mathmarks[2] = 220;
    // mathmarks[3] = 240;

    // cout<<"These are the math marks";
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl; 
    // cout<<mathmarks[3]<<endl;
    // cout<<"These are the marks"; 
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;

    // // You can change tha value of an array:
    // marks[2] = 245;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++){
    //     cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;
    // }

    // int i = 0;
    // while(i<4){
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    // int i = 0;
    // do{
    //     cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;
    //     i++;}
    // while(i<4);

    // _____________________
    // | 32 | 99 | 38 | 51 |
    //   p   p+1   p+2  p+3

    /*In arrays:
    Marks ---> address of the block.
    &Marks ---> wromg
    
    int* p = marks;
    p++; *(p) = 32
         *(p+1) = 99    
         *(p+2) = 38
    */

    /*In pointer:
    int a = 3;
    &a ---> address of a.
    */

    /***Very*******Very**********Important***/
    // Pointer arithematic:
    // new address = current address + [i * sizeof(data type)]
    //   (p+i)           (p)   

    //Pointers and arrays:
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p);
    // cout<<"The value of marks is "<<*p<<endl;   
    // cout<<"The value of marks is "<<*(p+1)<<endl;   
    // cout<<"The value of marks is "<<*(p+2)<<endl;   
    // cout<<"The value of marks is "<<*(p+3)<<endl;   
    return 0; 
}