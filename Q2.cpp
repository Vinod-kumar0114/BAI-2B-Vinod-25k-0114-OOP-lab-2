#include<iostream>
using namespace std;
class Circle {
    double radius;
    double pi=3.14159;


    public:
    void setRadius(double r){
        radius=r;
    }
    double getRadius(){
        return radius;
    }

    float getArea(){
        return radius*radius*pi;
    }

    float getDiameter(){
        return 2*radius;
    }

    float getCircumference(){
        return 2*pi*radius;
    }
};
int main(){
    Circle c;

    double r;
    cout<<"Enter the radius: ";
    cin>>r;
    c.setRadius(r);
    
    cout<<"Area: "<<c.getArea()<<endl;
    cout<<"Diameter: "<<c.getDiameter()<<endl;
    cout<<"Circumference: "<<c.getCircumference()<<endl;

    return 0;
}