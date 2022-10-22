/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;
class Time
{
    private:
    int time,min,sec;
    public:
    
        void settime(int x,int y,int z)
        {
            time=x;
            min=y;
            sec=z;
        }
        void timedisplay()
        {
            cout<<"time="<<time<<" "<<"min="<<min<<" "<<"sec="<<sec<<endl;
        }
};
int main()
{
    Time c1,c2;
    c1.settime(12,34,56);
    c2.settime(1,34,45);
    c1.timedisplay();
    c2.timedisplay();
}