/*Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit*/
#include<iostream>
using namespace std;
class Bill
{
    private:
    int customer_no;
    char customer_name[20];
    int bill_units;
    double bill;
    public:
    void get()
    {
        cout<<"enter customer deteles below :: \n "<<endl;
        cout<<"enter customer number :: ";
        cin>>customer_no;
        cout<<"\nenter customer name::";
        cin>>customer_name;
        cout<<"\nEnter no of units used ::";
        cin>>bill_units;
    }
    void put()
    {
        cout<<"\n\ncustomer number is : "<<customer_no;
        cout<<"\n\ncustomer name is : "<<customer_name;
        cout<<"\n\nNumber of units custumber : "<<bill_units<<endl;
        cout<<"\nbill of custumer : "<<bill;
    }
    void calc_bill()
    {
        if(bill_units<=100)
        bill=bill_units*1.20;
        else if(bill_units<=200)
        bill=100*1.20+(bill_units-100)*2;
        else
        bill=100*1.20+100*2+(bill_units-200)*3;
    }
};  
int main()
{
    Bill b1,b2;
    b1.get();
    b1.calc_bill();
    b1.put();
    cout<<"\n";
    cout<<"************************"<<endl;
    b2.get();
    b2.calc_bill();
    b2.put();
    return 0;
}