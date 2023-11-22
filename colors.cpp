#include <iostream>
using namespace std;

// Kody ANSI Escape dla kolorów tekstów w konsoli na Windows
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main() {
    cout << RED << "Czerwony tekst" << RESET << std::endl;
    cout << GREEN << "Zielony tekst" << RESET << std::endl;
    cout << YELLOW << "Żółty tekst" << RESET << std::endl;
    cout << BLUE << "Niebieski tekst" << RESET << std::endl;
    cout << MAGENTA << "Magenta tekst" << RESET << std::endl;
    cout << CYAN << "Cyan tekst" << RESET << std::endl;
    cout << WHITE << "Biały tekst" << RESET << std::endl;

    return 0;
}
