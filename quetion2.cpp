/*Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/
#include<iostream>
using namespace std;
class Time
{
    private:
    int HR,MIN,SEC;
    public:
    void setData(int x,int y,int z)
    {
        HR=x;
        MIN=y;
        SEC=z;
    }
    void showTime()
    {
        cout<<HR<<" " <<"HOURE : "<<MIN<<" "<<"MINUTE : "<<SEC<<" "  <<"SECOUND  "<<endl;
    }
    void normalize()
    {
        MIN=MIN+SEC/60;
        SEC=SEC%60;
        HR=HR+MIN/60;
        MIN=MIN/60;
    }
    Time add(Time t)
    {
       Time temp;
       temp.SEC=SEC+t.SEC;
       temp.MIN=MIN+t.MIN;
       temp.HR=HR+t.HR;
       temp.normalize();
       return (temp);
    } 
};
int main()
{
  Time t1,t2,t3;
  t1.setData(4,56,37);
  t2.setData(5,43,78);
  t3=t1.add(t2);
  t1.showTime();
  t2.showTime();
  t3.showTime();
}