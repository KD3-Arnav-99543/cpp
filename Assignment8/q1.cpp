#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int feet, int inches)
    {
        this->feet = feet;
        this->inches = inches;
    }

    Distance operator+(Distance d)
    {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if(temp.inches >= 12)
        {
            temp.feet++;
            temp.inches = temp.inches - 12;
        }

        return temp;
    }

    void operator++()
    {
        inches++;

        if(inches >= 12)
        {
            feet++;
            inches = 0;
        }
    }

    friend void operator--(Distance &d);

    friend istream& operator>>(istream &in, Distance &d);

    friend ostream& operator<<(ostream &out, Distance &d);
};

void operator--(Distance &d)
{
    if(d.inches == 0)
    {
        d.feet--;
        d.inches = 11;
    }
    else
    {
        d.inches--;
    }
}

istream& operator>>(istream &in, Distance &d)
{
    cout << "Enter feet: ";
    in >> d.feet;

    cout << "Enter inches: ";
    in >> d.inches;

    return in;
}

ostream& operator<<(ostream &out, Distance &d)
{
    out << d.feet << " feet " << d.inches << " inches";

    return out;
}

int main()
{
    Distance d1, d2, d3;

    cout << "Enter first distance:" << endl;
    cin >> d1;

    cout << "Enter second distance:" << endl;
    cin >> d2;

    d3 = d1 + d2;

    cout << "First Distance: " << d1 << endl;
    cout << "Second Distance: " << d2 << endl;
    cout << "Addition: " << d3 << endl;

    ++d1;
    cout << "After incrementing first distance: " << d1 << endl;

    --d2;
    cout << "After decrementing second distance: " << d2 << endl;

    return 0;
}