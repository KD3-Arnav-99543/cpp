#include<iostream>
using namespace std;
class Time{
    private:
    int hour;
    int minute;
    int seconds;
    public:
    Time(void):hour(0),minute(0),seconds(0)
    {}
    Time(int hr,int min,int sec):hour(hr),minute(min),seconds(sec)
    {}
    int getHour()
    {
        return this->hour;

    }
    int getMinute()
    {
        return this->minute;

    }
    int  getSeconds()
    {
        return this->seconds;
    }
    void setHour(int hr)
    {
        hour=hr;


    }
    void setMinute(int min)
    {
        minute=min;

    }
    void setSeconds(int sec)
    {
        seconds=sec;
    }
    void printTime()
    {
        cout<<hour<<":"<<minute<<":"<<seconds<<endl;
    }
    void accept( void )
    {
        cout<<"Enter hrs , mins , secs : "; 
        cin>>hour>>minute>>seconds; 
    }


};
int menu(){
     cout << "\n-----  MENU -----" << endl;
    cout<<"1.Add Time: "<<endl;
    cout<<"2.Display All Time: "<<endl;
    cout<<"3.Display only hrs of all time objects: "<<endl;
    cout<<"4.Exit: "<<endl;
    cout << "Enter your choice: ";
    int choice;
    cin>>choice;
    return choice;

}
int main(){
    int x;
    int choice;
    cout<<"Enter number of all time objects: ";
    cin>> x;

    Time *arr=new Time [x];
     while ((choice = menu()) != 4)
    {
        switch (choice)
        {
        case (1):
        {
            for(int i=0; i<x; i++)
            {
                arr[i].accept();                
            }
            break;
        }

        case (2):
        {
             cout << "\nAll Time objects:\n";
                    for (int i = 0; i < x; i++)
                    {
                        cout << "Time " << (i + 1) << ": ";
                        arr[i].printTime();
                    }
                    break;
        }
        case (3):
        { 
            cout << "\nHours of all Time objects:\n";
                    for (int i = 0; i < x; i++)
                    {
                        cout << "Time " << (i + 1) << " Hour: " << arr[i].getHour() << endl;
                    }
                    break;
        }
        default:
         cout << "Invalid choice! Try again.\n";
            break;
        }
    }
     // Cleanup
    delete[] arr;
    arr = NULL;
    return 0;


}