/*Define a class Circle and define an instance member function to find the area of the
circle.*/
#include<iostream>
using namespace std;
class Circle
{
    private:
    float r,A;
    public:
    void setvalue(int x)
    {
        r=x; 
    }
    float getr()
    {
        return r;
    }
    float getarea()
    {
        return A;
    }
    void caculatearea()
    {
        A=3.14*r*r;
    }
};
int main()
{
    Circle c1,c2;
    c1.setvalue(5);
    c2.setvalue(12);
    c2.caculatearea();
    c1.caculatearea();
    cout<<"AREA OF CIRCLE IS  "<<c1.getr()<<" "<<"IS"<<" "<<c1.getarea()<<endl;
    cout<<"AREA OF CIRCLE IS "<<c2.getr()<<" "<<"IS "<<" "<<c2.getarea();
}
