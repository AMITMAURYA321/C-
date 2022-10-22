/*Define a class Counter and Write a program to Show Counter using Constructor.*/
#include<iostream>
using namespace std;
class Counter
{
   
    public:
    int static count;
    Counter()
    {
        count++;
    }
    void intc_Counter()
    {
       count ;
    }
    int get_Counter()
    {
        return count;

    }
};
int Counter :: count;
int main()
{
    Counter c1,c2,c3;
   cout<<"count"<<" " << c1.get_Counter();
   return 0;
}