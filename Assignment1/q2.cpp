#include<iostream>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;


    public:
    void initDate(){
        day=1;
        month=5;
        year=2024;

         
}
void printDateOnConsole(){
    cout<<"Day: "<<day<<endl;
    cout<<"Month : "<<month<<endl;
    cout<<"Year: "<<year<<endl;


}
void acceptDateFromConsole(){
    cout<<"Day : ";
    cin>>day;
    cout<<"Month : ";
    cin>>month;
    cout<<"Year : ";
    cin>>year;
    
    

}

bool isLeapYear(){
    if((year%4==0 && year%100!=0)|| year%400==0)
        return true;
    return false;

}
};
int menuList( void )
{
    int choice; 
    cout<<"0.Exit: "<<endl;
    cout<<"1.acceptDateFromConsole: "<<endl; 
    cout<<"2.printDateOnConsole: "<<endl;
    cout<<"3. leap year: "<<endl;
    cout<<"Enter the choice : ";
    cin>>choice;  
    return choice;
}
int main(){
    Date d;
    int choice;

    while((choice = menuList( ))!=0)
    {
        switch (choice)
        {
        case 1: 
            d.acceptDateFromConsole(); 
            break;
        case 2: 
            d.printDateOnConsole(); 
            break;  
        case 3:
        if(d.isLeapYear())
        cout<<"leap year"<<endl;
        else
        cout<<"not leap year"<<endl;
        break;

        
    default:
    cout<<"invalid choice";
        }
    }


}