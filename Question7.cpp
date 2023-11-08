#include <iostream>
using namespace std;

int main() {
    int daysLate;
    char bookType;

    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;

    cout << "Enter the type of book (R for regular, C for children's, or E for reference): ";
    cin >> bookType;

    double lateFee = 0.0;

    if (daysLate <= 0) {
        cout << "No late fee. The book is not late." << endl;
    } else if (bookType == 'R') { // Regular book
        lateFee = 0.5 * daysLate;
    } else if (bookType == 'C') { // Children's book
        lateFee = 0.25 * daysLate;
    } else if (bookType == 'E') { // Reference book
        lateFee = 0.8*daysLate; 
    } else {
        cout << "Invalid book type." << endl;
        return 1; // Exit with an error code
    }

    cout << "The late fee for the book is: $" << lateFee << endl;

    return 0;
}