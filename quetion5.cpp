//Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int l,w,h ,TOTAL;
    cout<<"\nENTER THE LENGHT ";
    cin>>l;
    cout<<"\nENTER THE width ";
    cin>>w;
    cout<<"\nENTER THE hight "; 
    cin>>h;
    TOTAL=l*w*h;
    cout<<"\nTHE VOLUME OF A CUBOID "<<TOTAL;
}