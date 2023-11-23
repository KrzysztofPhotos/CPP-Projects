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
    car audi_RS6{ "Audi", "RS6", 400000, 3.29, "KR 82012", "Sport" };
    car audi_A8{ "Audi", "A8", 150000, 2.40, "KK 82762", "Combi" };
    car mercedes_cla200{ "Mercedes", "CLA 200 AMG", 400000, 4.29, "KR 76404", "Sport" };
    car tesla_model_s{ "Tesla", "Model S", 800000, 2.20, "EL 12345", "Electric" };
    car chevrolet_camaro{ "Chevrolet", "Camaro", 500000, 4.50, "CC 54321", "Convertible" };
    car nissan_altima{ "Nissan", "Altima", 300000, 2.90, "NA 98765", "Sedan" };
    car jaguar_f_type{ "Jaguar", "F-Type", 600000, 5.20, "JF 23456", "Coupe" };
    car subaru_outback{ "Subaru", "Outback", 350000, 3.00, "SO 87654", "SUV" };

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
