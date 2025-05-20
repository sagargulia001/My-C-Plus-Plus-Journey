#include<iostream>
using namespace std;
int glo = 6;/*This is global variable*/
void sum(){
    cout<<glo;

}
int main(){
    int glo = 67;/*This is a local variable*/
    glo = 65;/*glo value changes to 65 because its value was chnged later*/

    int a = 7;
    float b = 1.32;
    bool yes = 1;
    double c = 1.223242;
    char you = 'S';
    sum();
    cout<<a<<endl<<b<<endl<<yes<<endl<<c<<endl<<you<<endl<<glo;
//Local variable take precedence over global variable
  
    return 0;
}