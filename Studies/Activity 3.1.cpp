/* Following example 1 of part 1 Loops.Using the for loop, create a program that ask the user for the number of lines of the message and print a progressive message step by step :

I want to print some lines.
How many lines do you want ? 4
Hello
Hello Hello
Hello Hello Hello
Hello Hello Hello Hello */


#include <iostream>
#include <string>
using namespace std;

string text, result;
int lines;

int main()
{
    cout << "Please provide a text:" << endl;
    cin >> text;
    cout << "How many lines do you want?" << endl;
    cin >> lines;

    for (int i = 1; i < lines+1; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << text << " ";
        }
        cout << endl;
    };

    return 0;
}