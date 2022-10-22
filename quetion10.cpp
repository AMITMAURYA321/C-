//Write a C++ program to add all the numbers of an array of size 10;
#include<iostream>
using namespace std;
int main()
{
    int a[10],b,sum=0;
    cout<<"\nENTER 10 NUMBERS ";
    for(int i=0;i<=10;i++)
    cin>>a[i];
    for(int i=0;i<10;i++)
    sum=sum+a[i];
    cout<<"SUM IS "<<sum;
    return 0;
}