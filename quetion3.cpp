/*Define a class Cube and calculate Volume of Cube and initialise it using constructor.*/
#include<iostream>
using namespace std;
class Cube
{
   public:
   double side;
   double volume()
   {
    return (side*side*side);
   }
   Cube(double side1)
   {

    cout<<"CONSTURCTOR CALLED"<<endl;
    side=side1;
   }
   Cube()
   {
    cout<<"DEFULT CONSTURCTOR CALLED"<<endl;
   }
};
int main()
{
    Cube c1(3.34);
    Cube c2;
    cout<<"\nthe side of the cube is" <<c1.side<<endl;
    cout<<"\nthe volume of the first cube is :" << c1.volume()<<endl;
    cout<<"\nENTER THE LENGHT OF SECOND CUBE IS.... "<<endl;
    cin>>c2.side;
    cout << "LENGHT OF SECOND CUBE IS =>"<< c2.volume()<<endl;

    
    
        
}