/*Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
#include<iostream>
using namespace std;
class Square
{
    private:
    int a;
    int b;
    static int count;
    public:
    
    void seta(int x)
    {
        a=x;
    }
    int geta()
    {
        return a;

    }
    int getb()
    {
        return b;
    }
    int getcount()
    {
        return count++;
    }
    void calculateSquare()
    {
        b=a*a;
    }
    
};
int Square::count;
int main()
{
  Square s1,s2,s3;
  s1.seta(5);
  s1.calculateSquare();
  s2.seta(10);
  s2.calculateSquare();
  s3.seta(15);
  s3.calculateSquare();
  cout<<"NUMBER IS "<<s1.geta()<<" "<<"SQUARE IS "<<s1.getb()<<" "<<"FUNCTION COUNT IS  "<<s1.getcount()<<endl;
  cout<<"NUMBER IS "<<s2.geta()<<" "<<"SQUARE IS "<<s2.getb()<<" "<<"FUNCTION COUNT IS  "<<s2.getcount()<<endl;
  cout<<"NUMBER IS "<<s3.geta()<<" "<<"SQUARE IS "<<s3.getb()<<" "<<"FUNCTION COUNT IS  "<<s3.getcount();
}