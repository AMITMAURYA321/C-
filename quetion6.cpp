//Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    float num1,num2,num3,TOTAL,AVERAGE;
    cout<<"ENTER THREE NUMBRE ";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    TOTAL=num1+num2+num3;
    AVERAGE=TOTAL/3;
    cout<<"AVERAGE OF 3 NUMBER "<<AVERAGE;
}