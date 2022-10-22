//Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int fact(int x)
{
    if(x<=0)
    return 1;
    int fact=1;
    for(int i=1;i<=x;i++)
    fact=fact*i;
    return fact;
}
int comb(int n,int r)
{
    int comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
int fact(int x);
int comb(int n,int r);
int main()
{
    int n;
    cout<<"ENETR NUMBER";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int k=0;
            if(j==0)
            while(k++ <=(2-i+1))
            printf(" ");
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
    return 0;
}