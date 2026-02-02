#include <iostream>
using namespace std;

class Employee {
    string name;
    double salary;
    double tax_percentage;

public:
    void get_data() {
        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter monthly salary: ";
        cin >> salary;

        cout << "Initial tax percentage is 2\n";
        tax_percentage=2;
    }

    double Salary_after_tax() {
        double tax_amount = salary * tax_percentage / 100;
        double remaining_salary = salary - tax_amount;
        return remaining_salary;
    }

    void update_tax_percentage(double new_tax) {
        tax_percentage = new_tax;
        cout << "Tax percentage increased to " << tax_percentage << "%\n";
    }

    void display_salary() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary after tax: " << Salary_after_tax() << endl;
    }
};

int main() {
    Employee e1, e2, e3;

    cout << "\nEmployee 1\n";
    e1.get_data();
    e1.display_salary();
    e1.update_tax_percentage(3);
    e1.display_salary();

    cout << "\nEmployee 2\n";
    e2.get_data();
    e2.display_salary();
    e2.update_tax_percentage(3);
    e2.display_salary();

    cout << "\nEmployee 3\n";
    e3.get_data();
    e3.display_salary();
    e3.update_tax_percentage(3);
    e3.display_salary();

    return 0;
}
