//Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int power(int x,int y)
{
    int a=1;
    while(y--)
    {
      a=a*x;
    }
    return a;
}
int power(int x,int y);
int main()
{
    int x,y;
    cout<<"ENTER TWO NUMBER";
    cin>>x>>y;
    cout<<x <<" raised to the power "<<y <<" is "<< power(x,y);
    return 0; 
}