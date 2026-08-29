#include<iostream>
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;
    public:
    Date(void):day(0),month(0),year(0)
    { }
    Date(int day,int month, int year):day(day), month(month),year(year)
    { }
    void accept( void )
    {
        cout<<"Day : "; 
        cin>>day; 
        cout<<"Month : "; 
        cin>>month; 
        cout<<"Year : "; 
        cin>>year; 
    }
    void display( void )
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl; 
    }

};
class Person
{
    private:
    string name;
    string address;
    Date birthdate; //ASSOSCIATION
    public:
    Person(void):name(" "),address(" ")
    { }
    Person(string name, string address, Date birthdate):name(name),address(address),birthdate(birthdate)
    { }
    void accept(void)
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Address: ";
        cin>>address;
        cout<<"Enter Birthdate: ";
        birthdate.accept();

    }
    void display(void)
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Birthdate: ";
        birthdate.display();
    }
};
class Student
{
    private:
    int id;
    int marks;
    string course;
    Date joiningdate; //ASSOCIATION
    Date enddate;  //ASSOCIATION
    public:
    Student(void):id(0),marks(0), course(" ")
    { }
    Student(int id, int marks,string course, Date joining, Date enddate):id(id),marks(marks),course(course), joiningdate(joining),enddate(enddate)
    {}
    void accept(void)
        {
            cout<<"Id : ";
            cin>>id;
            cout<<"Marks : ";
            cin>>marks;
            cout<<"Course : ";
            cin>>course;
            cout<<"Enter Joining Date : "<<endl;
            joiningdate.accept();
            cout<<"Enter End Date : "<<endl;
            enddate.accept();
        }
        void display(void)
        {
            cout<<"Id : "<<id<<endl;
            cout<<"Marks : "<<marks<<endl;
            cout<<"Course : "<<course<<endl;
            cout<<"Joining Date : ";
            joiningdate.display();
            cout<<endl;
            cout<<"End Date : ";
            enddate.display();
            cout<<endl;
        }

};
int main()
{
    cout<<"----PERSON DETAILS-----"<<endl;
    Person p1;
    p1.accept();
    p1.display();

    cout<<endl<<"----- Person (parameterized) -----"<<endl;
    Date dob(03, 04, 2002);
    Person p2("AK", "Meerut", dob);
    p2.display();

    cout<<endl<<"----- Student -----"<<endl;
    Student s1;
    s1.accept();
    s1.display();

    cout<<endl<<"----- Student (parameterized) -----"<<endl;
    Date joiningdate(1, 1, 2026);
    Date enddate(31, 12, 2026);
    Student s2(101, 85.5, "C-DAC PGCP-AC", joiningdate, enddate);
    s2.display();

    return 0;

}