//Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\nENTER TWO NUMBRES ";
    cin>>a>>b;
    if(a>b)
    cout<<"maximum number "<<a;
    if(b>a)
    cout<<"maximum number "<<b;
    if(a==b)
    cout<<"number equal ";
    return 0;
}