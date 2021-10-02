#include <iostream>
#include <string.h>
using namespace std;

int main()  {
    char str[600];
    char name[100];
    char addr[200];
    char work[200];

    // Get three strings from the user.

    cout << "Enter name and press ENTER: ";
    cin.getline(name, 99);
    cout << "Enter address and press ENTER: ";
    cin.getline(addr, 199);
    cout << "Enter workplace and press ENTER: ";
    cin.getline(work, 199);

    // Build the output string, and then print it.

    strcpy(str, "\nMy name is ");
    strcat(str, name);
    strcat(str, ", I live at ");
    strcat(str, addr);
    strcat(str, ",\nand I work at ");
    strcat(str, work);
    strcat(str, ".");

    cout << str;

    return 0;
}