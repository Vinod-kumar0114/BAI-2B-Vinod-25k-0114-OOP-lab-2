#include <iostream>
using namespace std;
class BoardMarker{

    string company;
    string color;
    bool refillable;
    bool NoInk;

    public:
    void setCompany(string c) {
        company = c;
    }

    void setColor(string clr) {
        color = clr;
    }

    void setRefillable(bool r) {
        refillable = r;
    }

    void setInkStatus(bool ink) {
        NoInk = ink;
    }

    string getCompany() {
        return company;
    }

    string getColor() {
        return color;
    }

    bool isRefillable() {
        return refillable;
    }

    bool isInkEmpty() {
        return NoInk;
    }

    void write(){
        if(NoInk){
            cout<<"Ink is empty. plz refill the marker.\n";
        } else{
            cout<<"Maker is full with "<<color<<endl;
            NoInk=true;
        }
    }

    void refill(){
        if(refillable){
            NoInk=false;
            cout<<"Marker refilled successfully.\n";
        } else{
            cout<<"Marker is already filled.\n";
        }
    }

};

int main(){

    BoardMarker m1;
    BoardMarker m2;
    BoardMarker m3;


    m1.setCompany("Dollar");
    m1.setColor("Black");
    m1.setRefillable(true);
    m1.setInkStatus(false);
    
    m2.setCompany("Piano");
    m2.setColor("Red");
    m2.setRefillable(true);
    m2.setInkStatus(true);

    m3.setCompany("Signature");
    m3.setColor("Blue");
    m3.setRefillable(true);
    m3.setInkStatus(true);


    cout << "\nMarker 1\n";
    cout<<"Company: "<<m1.getCompany()<<endl;
    cout<<"Color: "<<m1.getColor()<<endl;
    m1.write();
    m1.refill();
    m1.write();

    cout << "\nMarker 2\n";
    cout<<"Company: "<<m2.getCompany()<<endl;
    cout<<"Color: "<<m2.getColor()<<endl;
    m2.write();
    m2.refill();

    cout << "\nMarker 3\n";
    cout<<"Company: "<<m3.getCompany()<<endl;
    cout<<"Color: "<<m3.getColor()<<endl;
    m3.write();
    m3.refill();
    m3.write();

    
    return 0;
}
