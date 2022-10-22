/*Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.*/
#include<iostream>
using namespace std;
class Greatest
{
    private:
    int a,b,c,maxN;
    public:
    void setvalue(int x, int y, int z)
    {
      a=x;
      b=y;
      c=z;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    int getc()
    {
        return c;
    }
    int getmax()
    {
        return maxN;
    }
    void calculatemax()
    {
        maxN=a>b?a>c?a:c:b>c?b:c;
    }
};
int main()
{
    Greatest g1,g2;
    g2.setvalue(12,45,67);
    g2.calculatemax();
    g1.setvalue(12,34,33);
    g1.calculatemax();
    cout<<g1.geta()<<" "<<g1.getb()<<" "<<g1.getc()<<" "<<"LARGEST NUMBER "<<g1.getmax()<<endl;
     cout<<g2.geta()<<" "<<g2.getb()<<" "<<g2.getc()<<" "<<"LARGEST NUMBER "<<g2.getmax();

}
