//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;

int sawp(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int m,n;
    cout<<"ENTER TWO NUMBER ";
    cin>>m>>n;
    sawp(m,n);
    cout<<"NUMBER SWAPING "<<m<<" "<<n;
    return 0;
}
