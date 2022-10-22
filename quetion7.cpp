/*Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/
#include<iostream>
using namespace std;
class Box
{
    private:
    int lenght,breadth,height;
    int volume;
    public:
    box(int x,int y,int z)
    {
        lenght=x;
        breadth=y;
        height=z;
    }
    int calculate_volume(int ,)
    {
        return lenght*breadth*height;
    }
    void showvolum()
    {
      cout<<calculate_volume();
    }
};
int main()
{
    Box b1(2,3,4);
    b1.calculate_volume();
    b1.showvolum();
}