#include<iostream>
using namespace std;
class Cylinder{
    private:
    double radius;
    double height;
    static  const double PI;
    public:
    Cylinder(void): radius(0), height(0) 
    {

    }
    Cylinder(double radius, double height) :radius(radius), height(height)
    {
        
    }
    double getRadius()
    {
        return radius;
    }
    void setRadius(double newradius)
    {
        this->radius= newradius;
    }
    double getHeight()
    {
        return height;
    }
    void setHeight(double newheight)
    {
        this->height=newheight;
    }
    double calculateVolume()
    {
        return PI * radius * radius *height;
    }


};
const double Cylinder:: PI=3.14;
int main(){
    Cylinder c1;
    c1.setRadius(6);
    c1.setHeight(3);

    cout<<"Cylinder 1 volume: "<<c1.calculateVolume()<<endl;


    Cylinder c2(6,8);
    cout<<"Cylinder 2 volume: "<<c2.calculateVolume()<<endl;

    cout << "Cylinder 2 Radius: " << c2.getRadius() << endl;
    cout << "Cylinder 2 Height: " << c2.getHeight() << endl;


    return 0;
}