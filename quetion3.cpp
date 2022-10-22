/*Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/
#include<iostream>
using namespace std;
class Factorial
{
    private:
    int n,fact;
    public:
    void setN(int x)
    {
        n=x;
    }
    int getN()
    {
        return n;
    }
    int getFactorial()
    {
        return fact;

    }
    void calculateFactorial()
    {
        int f=1,i;
        if(n<=0)
        {
            fact=1;
            return;
        }
        for( i=1;i<=n;i++)
        {
             f=f*i;
        }
        fact=f;
    }
};
int main()
{
    Factorial f1,f2;
    f1.setN(5);
    f2.setN(6);
    f2.calculateFactorial();
    f1.calculateFactorial();
    cout<<"factorial of "<<f1.getN()<<" is "<<f1.getFactorial()<<endl;
    cout<<"factorial of "<<f2.getN()<<" is "<<f2.getFactorial();
    return 0;
}