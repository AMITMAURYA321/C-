//Define a function to check whether a given number is a Prime number or not.
int prime(int num)
{
    int flag=0;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        flag=1;
    }
    return flag; 
}
#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int n;
    cout<<"ENTER NUMBER ";
    cin>>n;
    if(prime(n)==0)
    cout<<"PRIME NUMBER";
    else
    cout<<"NOT PRIME NUMBER";
    return 0;
}