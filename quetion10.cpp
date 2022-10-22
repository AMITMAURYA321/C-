/*Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/
#include<iostream>
using namespace std;
class Area
{
    private:
    float side,lenght,width,radius;
    public:
    void setside(float a)
    {
        side=a;
    }
    void setlengthwidth(float l,float w)
    {
        lenght=l;
        width=w;
    }
    void setradius(float r)
    {
        radius=r;
    }
    float areaofsquare()
    {
        return side*side;
    }
    float areofrectangle()
    {
        return lenght*width;
    }
    float areaofcircle()
    {
        return 3.14*radius;
    }
};
int main()
{
    Area a;
    a.setside(4);
    a.setlengthwidth(12,4);
    a.setradius(8);
    cout<<"area of square "<<a.areaofsquare()<<endl;
    cout<<"area of rectangle "<<a.areofrectangle()<<endl;
    cout<<"area of circle "<<a.areaofcircle();
    return 0;

}
