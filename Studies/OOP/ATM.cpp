#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


struct car {
    string brand;
    string model;
    double price;
    double price_per_kilometer;
    string license_plate;
    string type;
};


int main() {

    int choice;

    do
    {
        system("cls");

        cout << endl << "*** Welcome to our car rental services ***";
        cout << endl << "Select options:";
        cout << endl << "1. Check available cars to rent";
        cout << endl << "2. Login to your account";
        cout << endl << "  ﹂ Check your balance";
        cout << endl << "  ﹂ Show your last rides";
        cout << endl << "... more in future";
        cout << endl << endl << "5. Exit";

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "AVAILABLE CARS: ";
            _getch();
            break;
        case 2:

        case 5:
            exit(0);


        default:
            break;
        }

    } while (1);


    return 0;
}
