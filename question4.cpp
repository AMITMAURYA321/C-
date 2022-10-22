/*Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include<iostream>
using namespace std;
class LargestNumber
{
    private:
    int a,b,c;
    int LargestNumber;
    public:
    void setlargest(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    int getlargesta()
    {
        return a;
    }
    int getlargestb()
    {
        return b;
    }
    int getlargestc()
    {
        return c;
    }
    int getlargest()
    {
        return LargestNumber;
    }
    void claculatelargNumber()
    {
      int k;
      LargestNumber=a>b?a>c?a:c:b>c?b:c;
    }
};
int main()
{
    LargestNumber larg1,larg2;
    larg1.setlargest(12, 34 ,56);
    larg2.setlargest(102,343,123);
    larg1.claculatelargNumber();
    larg2.claculatelargNumber();
    cout<<larg1.getlargesta()<<" "<<larg1.getlargestb()<<" "<<larg1.getlargestc()<<" "<<"largestnumber "<<larg1.getlargest()<<endl;
    cout<<larg1.getlargesta()<<" "<<larg2.getlargestb()<<" "<<larg2.getlargestc()<<" "<<"largestnumber "<<larg2.getlargest();
    return 0;
}

