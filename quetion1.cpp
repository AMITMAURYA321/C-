/*Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)*/
#include<iostream>
using namespace std ;
class Complex
{
    private:
    int a,b;
    char i='i';
    public:
    void setData(int x,int y)
    {
       a=x;
       b=y;
    }
    void showData()
    {
      cout<<"real=="<<a <<" " <<"img=="<<b<<" " <<" "<<endl;
    }
    Complex add(Complex C)
    {
      Complex result;
      result.a=a+C.a;
      result.b=b+C.b;
      return result;
    }
};   
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,6);
    c2.setData(4,7);
    c3=c1.add(c2);
    c2.showData();
    c1.showData();
    c3.showData();
}