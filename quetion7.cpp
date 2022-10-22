//Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int a,int b,int c)
{
    return a+b+c;
}
int add(int a,int b,int c=0);
int main()
{
    int num1,num2,num3,total;
    cout<<"ENTER TWO NUMBER";
    cin>>num1>>num2;
    cout<<"SUM OF TWO NUMBER "<<add(num1,num2)<<endl;
    cout<<"ENTER THREE NUMBER ";
    cin>>num1>>num2>>num3;
    cout<<"SUM OF THREE NUMBER "<<add(num1,num2,num3);
    return 0;
}