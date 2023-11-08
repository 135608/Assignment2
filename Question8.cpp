#include <iostream>
using namespace std;

int main() {
    double purchaseAmount;
    cout << "Enter the total purchase amount: $";
    cin >> purchaseAmount;

    double totalCost = purchaseAmount;
    
    if (purchaseAmount >= 100) {
        // Apply a 10% discount for purchases over or equal to $100
        totalCost *= 0.90;
    } else if (purchaseAmount >= 50) {
        // Apply a 5% discount for purchases over or equal to $50 but less than $100
        totalCost *= 0.95;
    } else {
        // No discount for purchases under $50
    }

    cout << "Total cost after applying discounts: $" << totalCost << endl;

    return 0;
}