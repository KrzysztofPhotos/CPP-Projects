#include <iostream>
using namespace std;

class house
{
private:
    //members variables
    int lenght = 0, breadth = 0;

public:
    // members functions
    void setData(int x, int y)
    {
        lenght = x;
        breadth = y;
    };
    void area()
    {
        cout << "Area of house " << lenght * breadth << endl;
    };
};

int main()
{
    house gini, fetti;

    gini.setData(300, 500);
    gini.area();
    
    fetti.setData(150,400);
    fetti.area();

    return 0;
}

