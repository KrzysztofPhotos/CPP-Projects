#include <iostream>
#include <string>
using namespace std;

// calculate the price for rental (over few kilometers)
// add new clients (possiblitiy to create a new account)

int main()
{
    struct car{
        string brand;
        string model;
        double price;
        double price_per_kilometer;
        string license_plate;
        string type;
    };

    // DEFINING THE CARS

    car audi_RS6;
    audi_RS6.brand = "Audi";
    audi_RS6.model = "RS6";
    audi_RS6.type = "Sport";
    audi_RS6.license_plate = "KR 82012";
    audi_RS6.price = 400000;
    audi_RS6.price_per_kilometer = 3.29;


    // PUT YOUR CODE HERE
    return 0;
}

struct {
  int myNum;
  string myString;
} myStructure;