// hw4-11.cpp - Calculates and displays the ending balance for a savings account
// Created by <your name> on <current date>

#include <iostream>
#include <iomanip> // For formatted output
using namespace std;

int main() {
    // Declare variables
    double beginningBalance = 0.0;  // Starting balance of the account
    double totalDeposits = 0.0;     // Total deposits made during the period
    double totalWithdrawals = 0.0; // Total withdrawals during the period
    double endingBalance = 0.0;     // Final balance of the account

    // Input: Get values from the user
    cout << "Enter the beginning balance: ";
    cin >> beginningBalance;
    cout << "Enter the total deposits: ";
    cin >> totalDeposits;
    cout << "Enter the total withdrawals: ";
    cin >> totalWithdrawals;

    // Processing: Calculate the ending balance
    endingBalance = beginningBalance + totalDeposits - totalWithdrawals;

    // Output: Display the ending balance with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "The ending balance is: $" << endingBalance << endl;

    return 0; // Exit program
}
