#include <iostream>
using namespace std;

class WaterBottle {
    string company;
    string color;
    double capacity_l;
    int capacity_ml;

public:
    void setCompany(string c) {
        company = c;
    }

    void setColor(string col) {
        color = col;
    }

    void setCapacity(int ml) {
        capacity_ml = ml;
        capacity_l = ml / 1000.0;
    }

    string getCompany() {
        return company;
    }

    string getColor() {
        return color;
    }

    double getCapacityL() {
        return capacity_l;
    }

    int getCapacityML() {
        return capacity_ml;
    }

    void drinkWater() {
        int drink;
        cout << "Enter water drank (in ml): ";
        cin >> drink;

        if (drink <= capacity_ml) {
            capacity_ml = capacity_ml - drink;
            capacity_l = capacity_ml / 1000.0;
        } else {
            cout << "Not enough water in bottle.\n";
        }
    }
};

int main() {
    WaterBottle wb;

    wb.setCompany("Nestle");
    wb.setColor("Blue");
    wb.setCapacity(1000);

    cout << "Company: " << wb.getCompany() << endl;
    cout << "Color: " << wb.getColor() << endl;
    cout << "Capacity: " << wb.getCapacityML() << " ml ("<< wb.getCapacityL() << " L)" << endl;

    wb.drinkWater();

    cout << "\nAfter drinking water:\n";
    cout << "Remaining Capacity: " << wb.getCapacityML() << " ml ("<< wb.getCapacityL() << " L)" << endl;

    return 0;
}
