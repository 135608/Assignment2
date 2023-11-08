#include <iostream>
using namespace std;

int main() {
    double accountBalance = 1000.0; // Example account balance
    double dailyWithdrawalLimit = 500.0; // Example daily withdrawal limit
    double withdrawalAmount;
    
    cout << "Enter the withdrawal amount: $";
    cin >> withdrawalAmount;
    
    if (withdrawalAmount > dailyWithdrawalLimit) {
        cout << "Withdrawal amount exceeds the daily limit." << endl;
    } else if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds. Your account balance is $" << accountBalance << endl;
    } else {
        accountBalance -= withdrawalAmount;
        cout << "Withdrawal successful. Remaining account balance: $" << accountBalance << endl;
    }
    
    return 0;
}