/*Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int lenght,Width,A;
    public:
    void setvalue(int x,int y)
    {
        lenght=x;
        Width=y;
    }
    int getlenght()
    {
        return lenght;
    }
    int getwidtht()
    {
        return Width;
    }
    int getA()
    {
        return  A;
    }
    void calculateRectangle()
    {
        A=lenght*Width;
    }
};
int main()
{
    Rectangle r1,r2;
    r1.setvalue(12,5);
    r1.calculateRectangle();
    cout<<"LENGHT IS "<<" " <<r1.getlenght()<<" "<<"WIDTH IS "<<r1.getwidtht()<<" "<<"ARE OF RECTANGLE IS "<<r1.getA();
}
