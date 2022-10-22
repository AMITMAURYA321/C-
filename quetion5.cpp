/*Define a class Date and write a program to Display Date and initialise date object
using Constructors.*/
#include<iostream>
using namespace std;
class Date
{
    private:
    int MM,DATE,YEAR;
    public:
    Date(int x,int y, int z)
    {
        MM=x;
        DATE=y;
        YEAR=z;
    }
    void display()
    {
        cout<<"\nENTERED DATE IS :: ";
        cout<<MM<<"-"<<DATE<<"-"<<YEAR;
    }
};
int main()
{
    Date d1(12,3,2013);
    d1.display();
}