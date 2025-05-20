// #include<iostream>
// using namespace std;

// int main(){
//     // cout<<"Enter any three different numbers\n";
    // int a,b,c;
    // cout<<"a = ";cin>>a;
    // cout<<"b = ";cin>>b;
    // cout<<"c = ";cin>>c;
    // if(a>b){
    //     if(a>c){
    //         cout<<a<<" is the largest number";
    //     }
    //     else{cout<<c<<" is the largest number";
    //     }
    // }
    // else{
    //     if(b>c){
    //         cout<<b<<" is the largest number";
        
    //     }
    //     else{
    //         cout<<c<<" is the largest number";
    //     }
    // }
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
// First it checks if there is any local varable in sum if there is then it 
//prints it and if there is not global varible is printed.

    cout<<a<<endl<<b<<endl<<yes<<endl<<c<<endl<<you<<endl<<glo;
//Local variable take precedence over global variable
  
    return 0;
}