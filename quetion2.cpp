// Define a function to find the highest value digit in a given number.
int highestdigit(int num)
{
    int max=-1;
    while(num)
    {
       if(max<num%10)
       max=num%10;
       num=num/10;
    }
    return max;
}
#include<iostream>
using namespace std;
int highestdigit(int num);
int main()
{
    int num1;
    cout<<"ENTER NUMBER"<<endl;
    cin>>num1;
    cout<<"HIGHT DIGITS "<<highestdigit(num1);
    return 0;
}