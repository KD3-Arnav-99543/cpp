#include<iostream>
using namespace std;
class Employee
{
    private:
    int id;
    double salary;
    public:
    Employee(void):id(0),salary(0.0)
    { }
    Employee(int id, double salary):id(id),salary(salary)
    { }
    void setid(int id)
    {
        this->id=id;
    }
    int getid()
    {
        return id;
    }
    void setsalary(double salary)
    {
        this->salary=salary;
    }
    double getsalary()
    {
        return salary;
    }
    void accept()
    {
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter salary: ";
        cin>>salary;

    }
    void display()
    {
        cout<<"Employee id is: "<<id<<endl;
        cout<<"Salary is : "<<salary<<endl;
    }


};
class Manager:virtual public Employee
{
    private:
    double bonus;
    public:
    Manager():bonus(0.0)
    { }
    Manager(double bonus):bonus(bonus)
    { }
    Manager(int id,double salary,double bonus):Employee(id, salary), bonus(bonus)
    { }
    void setbonus(double bonus)
    {
        this->bonus=bonus;
    }
    double getbonus()
    {
        return bonus;

    }
    protected:
    void acceptManager()
    {
        cout<<"Enter the bonus: ";
        cin>>bonus;
    }
    void displayManger()
    {
        cout<<"Bonus is: "<<bonus<<endl;
    }
    public:
    void accept()
    {
        acceptManager();
    }
    void display()
    {
        displayManger();
    }
};

class Salesman:virtual public Employee
{
    private:
    double commision;
    public:
    Salesman(void):commision(0.0)
    { }
    Salesman(double commission): commision(commision)
    { }
    Salesman(int id, double salary, double commision):Employee(id,salary),commision(commision)
    {    }
    void setcommission(double commission)
    { 
        this->commision=commision;
    }
    double getcommision()
    {
        return commision;
    }
    protected:
    void acceptSalesman()
    {
        cout<<"Enter the Commision: ";
        cin>>commision;

    }
    void displaySalesman()
    {
        cout<<"Commision is: "<<commision<<endl;

    }
    public:
    void accept()
    {
        acceptSalesman();
    }
    void display()
    {
        displaySalesman();
    }
};
class salesManager:public Manager,public Salesman
{
    public:
    salesManager(void)        
    { }
    salesManager(int id,double salary, double commission,double bonus):Employee(id, salary),Manager(bonus),Salesman(commission)
    {  }
    void accept()
    {
        Employee::accept();
        Manager::acceptManager();
        Salesman::acceptSalesman();
    }
    void display()
    {
        Employee::display();
        Manager::displayManger();
        Salesman::displaySalesman();
    }

};
int main()
{
    Salesman sm;
    sm.accept();
    sm.display();


    return 0;
}