/*Define a class student and write a program to enter student details using constructor
and define member function to display all the details.*/
#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
    char student_name;
    int student_id;
    int student_roll_no;
    int student_phone_number;
    public:
    Student(char str,int x,int y,int z)
    {
        student_name=str;
        student_id=x ;
        student_roll_no=y;
        student_phone_number=z;
    }
    void show_data()
    {
        cout<<"student_name = "<<student_name<<endl<<"student_id = "<<student_id<<endl<<"student_roll_no = "<<student_roll_no<<endl<<"student_phone_number = "<<student_phone_number<<endl;
    }

};
int main()
{
    cout<<"STUDENT 1 DETALIES"<<endl;
    cout<<"###################################"<<endl;
    Student s1('A',123,12,819296);
    s1.show_data(); 
    cout<<endl;



    cout<<"STUDENT 2 DETALIES"<<endl;
    cout<<"###################################"<<endl;
    Student s2('B',413,352,3422);
    s2.show_data();
}