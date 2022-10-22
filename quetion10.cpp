/*10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.*/
#include<iostream>
using namespace std;
class StaticCount
{
   
    public:
    int static count;
    StaticCount()
    {
        count++;
    }
    void intc_Counter()
    {
       count;
    }
    int get_Counter()
    {
        return count;

    }
};
int StaticCount :: count;
int main()
{
    StaticCount c1,c2,c3;
   cout<<"count"<<" " << c1.get_Counter();
   return 0;
}