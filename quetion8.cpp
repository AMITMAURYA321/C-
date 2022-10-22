//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"\nENTER TWO NUMBER ";
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"SAWP VALUES " <<"X==="<<x <<" "<<"Y==="<<y;
    return 0;
}