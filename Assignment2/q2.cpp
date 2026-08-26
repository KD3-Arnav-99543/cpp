#include <iostream>
using namespace std;
class tollbooth
{
private:
    unsigned int payingcarCount;
    unsigned int nonpayingcarCount;
    unsigned totalCars;
    double totalmoney;

public:
    tollbooth(void)
    {
        this->nonpayingcarCount = 0;
        this->payingcarCount = 0;
        this->totalCars = 0;
        this->totalmoney = 0;
    }
    void payingcar()
    {
        totalCars++;
        payingcarCount++;
        totalmoney = totalmoney + 0.50;
    }
    void nonpayingcar()
    {
        totalCars++;
        nonpayingcarCount++;
    }
    void printOnConsole()
    {
        cout << "Total cars:  " << totalCars << endl;
        cout << "Paying cars:   " << payingcarCount << endl;
        cout << "Non-paying cars:  " << nonpayingcarCount << endl;
        cout << "Total cash collected: " << totalmoney << endl;
    }
};
int menulist()
{
    int choice;
    cout << "\n-----TOLLBOOTH MENU -----" << endl;
    cout << "1. Calculate PAYING CAR: " << endl;
    cout << "2. Calculate NON-PAYING CAR: " << endl;
    cout << "3. Calculate TOTAL : " << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}
int main()

{
    tollbooth tb;
    int choice;
    while ((choice = menulist()) != 4)
    {
        switch (choice)
        {
        case (1):
        {
            tb.payingcar();
            break;
        }

        case (2):
        {
            tb.nonpayingcar();
            break;
        }
        case (3):
        {
            tb.printOnConsole();
            break;
        }
        default:
        cout << "Final totals: " << endl;
            break;
        }
    }
    return 0;
}