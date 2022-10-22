/*Write functions using function overloading to add two numbers having different data
types.*/
#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float j ,float k)
{
    return j+k;
}
int main()
{
    int n,m,k,l;
    cout<<"ENTER TWO NUMBERS";
    cin>>n>>m;
    cout<<"ENTER TWO NUMBERS";
    cin>>k>>l;
    cout<<"SUM OF TWO NUMBER"<<add(n,m)<<endl;
    cout<<"SUM OF TWO NUMBER"<<add(k,l);
}