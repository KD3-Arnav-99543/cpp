#include <iostream>
using namespace std;
class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    Box() // parameterless
    {
        length = 5;
        breadth = 6;
        height = 7;
    }
    Box(int x) // single parametre
    {
        length = breadth = height = x;
    }
    Box(int l, int b, int h) // three parameter
    {
        length = l;
        breadth = b;
        height = h;
    }
    void calculateVolume()
    {
        int volume = length * breadth * height;
        cout << "The Volume are: " << volume << endl;
    }
};
int menulist()
{
    int choice;
    cout << "\n----- BOX VOLUME MENU -----" << endl;
    cout << "1. Calculate Volume with default values" << endl;
    cout << "2. Calculate Volume with length, breadth and height same" << endl;
    cout << "3. Calculate Volume with different length, breadth, height" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}
int main()
{
    int choice;
    while ((choice = menulist()) != 4)
    {
        switch (choice)
        {
        case (1):
        {
            Box b1;
            b1.calculateVolume();
            break;
        }

        case (2):
        {
            int value;
            cout << "Enter single value: ";
            cin >> value;
            Box b2(value);
            b2.calculateVolume();
            break;
        }
        case (3):
        { Box b3;
            int l, b, h;
            cout << "Enter length : ";
            cin >> l;
            cout << "Enter Breadth : ";
            cin >> b;
            cout << "Enter height : ";
            cin >> h;
            b3={l,b,h};
            b3.calculateVolume();
        }
        default:
            break;
        }
    }
    return 0;
}
