#include <iostream>
using namespace std;

class complex;

class sumcomplex
{
public:
    int sumcomp(complex , complex );
};

class complex
{

    int a, b;

    friend int sumcomplex :: sumcomp(complex, complex);

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void getdata()
    {
        cout << "The sum of complex number is  " << a << " + " << b << "i" << endl;
    }
};

int sumcomplex :: sumcomp(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1;
    o1.setdata(1, 2);
    o1.getdata();

    complex o2;
    o2.setdata(4, 5);
    o2.getdata();

    sumcomplex sum;
    int ans = sum.sumcomp(o1,o2);
    cout<<ans;
    return 0;
}