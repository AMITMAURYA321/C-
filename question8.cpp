/*Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle*/
#include<iostream>
using namespace std;
int area(int l,int w)
{
    return l*w;
}
float area(float b,float h)
{
    return 0.5*b*h;
}
float area(float r)
{
    return 3.14*r*r;
}
int main()
{
    int l,w,b,h,r;
    cout<<"CALCULATE AREA OF RECTENGLE"<<endl;
    cout<<"ENTER LENTH AND WIDTH "<<endl;;
    cin>>l>>w;
     cout<<"CALCULATE AREA OF TRIANGLE"<<endl;
    cout<<"ENTER BASE AND HEIGHT "<<endl;;
    cin>>b>>h;
    cout<<"CALCULATE AREA OF CIRCLE"<<endl;
    cout<<"ENTER RADIOUS"<<endl;;
    cin>>r;
    cout<<"AERA OF RECTANGLE "<<area(l,w)<<endl;
    cout<<"AERA OF TRIANGLE "<<area(b,h)<<endl;
    cout<<"AERA OF CIRCLE "<<area(r)<<endl;


}