#include <iostream>
using namespace std;

class StationeryShop {
    string items[50];
    double prices[50];
    int count;

public:
    StationeryShop() {
        count = 0;
    }

    void addItem() {
        cout << "Enter item name: ";
        cin >> items[count];

        cout << "Enter price: ";
        cin >> prices[count];

        count++;
        cout << "Item added\n";
    }

    void showItems() {
        if (count == 0) {
            cout << "No any items.\n";
            return;
        }

        cout << "\nItems:\n";
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". " << items[i] << endl;
        }
    }

    void editPrice() {
        showItems();
        int choice;
        cout << "Select item to edit price: ";
        cin >> choice;

        if (choice < 1 || choice > count) {
            cout << "Invalid choice.\n";
            return;
        }

        cout << "Enter new price: ";
        cin >> prices[choice - 1];

        cout << "Price updated\n";
    }

    void viewAllItems() {
        if (count == 0) {
            cout << "No items available.\n";
            return;
        }

        cout << "\nItems with Prices:\n";
        for (int i = 0; i < count; i++) {
            cout << items[i] << "  Rs. " << prices[i] << endl;
        }
    }

    void generateReceipt() {
        int n;
        double total = 0;

        cout << "Enter number of items purchased: ";
        cin >> n;

        cout << "\n----- Receipt -----\n";

        for (int i = 0; i < n; i++) {
            string name;
            int quantity;

            cout << "Enter item name: ";
            cin >> name;

            cout << "Enter quantity: ";
            cin >> quantity;

            for (int j = 0; j < count; j++) {
                if (items[j] == name) {
                    double cost = prices[j] * quantity;
                    total += cost;
                    cout << name << " - " << quantity << " = Rs " << cost << endl;
                }
            }
        }

        cout << "\n\nTotal Bill: Rs. " << total << endl;
    }
};

int main() {
    StationeryShop shop;
    int choice;

    do {
        cout << "\nStationery Shop\n";
        cout << "1. Add Item\n2. Show Items\n3. Edit Item Price\n4. View Items with Prices\n5. Generate Receipt\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            shop.addItem();
            break;
        case 2:
            shop.showItems();
            break;
        case 3:
            shop.editPrice();
            break;
        case 4:
            shop.viewAllItems();
            break;
        case 5:
            shop.generateReceipt();
            break;
        case 6:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 6);

    return 0;
}
