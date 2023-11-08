#include <iostream>
using namespace std;

int main() {
    int age;
    char movieType;
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter the type of movie (R for regular, 3 for 3D): ";
    cin >> movieType;
    
    double ticketPrice = 0.0;
    
    if (movieType == 'R') {
        if (age <= 12) {
            ticketPrice = 8.00;  // Regular movie, child
        } else if (age >= 65) {
            ticketPrice = 9.00;  // Regular movie, senior
        } else {
            ticketPrice = 10.00; // Regular movie, adult
        }
    } else if (movieType == '3') {
        if (age <= 12) {
            ticketPrice = 10.00; // 3D movie, child
        } else if (age >= 65) {
            ticketPrice = 12.00; // 3D movie, senior
        } else {
            ticketPrice = 15.00; // 3D movie, adult
        }
    } else {
        cout << "Invalid movie type." << endl;
        return 1; // Exit with an error code
    }
    
    cout << "Ticket price: $" << ticketPrice << endl;
    
    return 0;
}