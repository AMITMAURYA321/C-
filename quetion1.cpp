/* Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x;
            b=y;
        }
        void showdata()
        {
            cout<<"REAL="<<a<<" "<<"IMAG="<<b<<endl;
        }
};

int main()
{
    Complex c1,c2;
    c1.setdata(12,34);
    c2.setdata(8,4);
    c1.showdata();
    c2.showdata();
}