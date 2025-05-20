#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    // Selection control structure: Switch Case statements
    switch (age)
    {
    case 17:
        /* code */
        cout<<"You are little.";
        break;//if the conditions are fullfilled and you want to stop further commands break will directly move out of the switch operator and then other codes will run as usual.
    case 18:
        cout<<"You are an adult now.";
        break;

    default:
        break;

    }
    return 0;
}