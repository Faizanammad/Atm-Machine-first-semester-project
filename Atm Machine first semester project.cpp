#include <iostream>
#include <string>
using namespace std;

double current_balance = 1000.0;
string password = "faizan";


void withdraw(int amount) {
    if (amount > 0 && amount <= current_balance) {
        current_balance -= amount;
        cout << "You have withdrawn" << amount << endl;
        cout << "Current balance" << current_balance << endl;
    }
    else if (amount > current_balance) {
        cout << "Insuffivcffffffcient funds" << endl;
    }

}


void deposit(int amount) {
    if (amount > 0) {
        current_balance += amount;
        cout << "You have deposited " << amount << endl;
        cout << "Current balance " << current_balance << endl;
    }
    else {
        cout << "Invalid deposit amount" << endl;
    }
}


void check_balance() {
    cout << "Your current balance is " << current_balance << endl;
}


bool verify_pin() {
    string input;

    cout << "Enter your password: ";
    cin >> input;
    if (input == password) {
        cout << "Access granted" << endl;
        return true;
    }
    else {
        cout << "Incorrect password Try again" << endl;
    }

    return false;
}
int main() {
    cout << " Please insert your card!" << endl;


    if (!verify_pin()) {
        return 0;
    }
    system("cls");

    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Remove Card" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        double amount;
        switch (choice) {
        case 1:
            cout << "Enter the amount to deposit ";
            cin >> amount;
            deposit(amount);


            break;
        case 2:
            cout << "Enter the amount to withdraw: ";
            cin >> amount;
            withdraw(amount);
            break;
        case 3:
            check_balance();
            break;
        case 4:
            cout << "Card removed Thank you for using my atm hehe" << endl;
            return 0;
            break;
        default:
            cout << "Invalid choice Please try again." << endl;
            return 0;
        }
    } while (choice != 4);

    return 0;
}
