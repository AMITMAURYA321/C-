/*Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/
#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
    int actuallNumber;
    int reverseNumber;
    public:
    void setactuallnumber(int x)
    {
        actuallNumber=x;
    }
    int getactuallNumber()
    {
        return actuallNumber;
    }
    int getreverseNumber()
    {
        return reverseNumber;
    }
    void calculatereversenumber()
    {
        int r,y=0;
        while(actuallNumber!=0)
        {
            r=actuallNumber%10;
            y=y*10+r;
            actuallNumber=actuallNumber/10;
        }
        reverseNumber=y;
        
    }
};
int main()
{
    ReverseNumber r1,r2;
    r1.setactuallnumber(4178);
    r2.setactuallnumber(5456);
    r1.calculatereversenumber();
    r2.calculatereversenumber();
    cout<<"reverse numbers "<<r1.getactuallNumber()<<r1.getreverseNumber()<<endl;
    cout<<"reverse numbers "<<r2.getactuallNumber()<<r2.getreverseNumber();

}