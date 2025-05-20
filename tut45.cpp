/* Virtual Base Class -----> In case of hybrid inheritance it 
    ensures that the inherited member doesn't cause ambiguity 
    when inheriting from two classes with same member
*/
#include <iostream>
using namespace std;

class students
{
protected:
    string name;
    int roll_no;

public:
    void set_name(string a){
        name = a;
    }
    void set_number(int a){
        roll_no = a;
    }
    void print_number(void){
        cout<<"Your roll no is "<<roll_no<<endl;
    }
};

class test : virtual public students{

};

class sports : public virtual students{

};

class result : public test, public sports{

};

int main()
{

    return 0;
}