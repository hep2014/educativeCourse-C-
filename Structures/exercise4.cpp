/*
 * Exercise 4: Access Modifiers - Encapsulation Simple.
 * Create an Account struct with a private field balance (type double ) and a public
 * method deposit(double amount) that increases the balance, and a
 * method getBalance() that returns the current balance. In main , try
 * changing balance directly (e.g. acc.balance = 100; ) - see if the compiler
 * issues an error. Then use the method deposit to add funds to the account and getBalance
 * to get the value.
 */

#include <iostream>

using namespace std;

struct Account{
private:
    double balance = 0;
public:
    void deposit(double amount){
        if (amount > 0){
            balance += amount;
        } else{
            cout << "Amount must be positive\n";
            return;
        }
    }
    void get_balance(){
        cout << balance << " " << endl;
    }
};

int main(){
    Account acc1;
    // cout << acc1.balance; <- error, because balance is private
    cout << "Balance before raising: ";
    acc1.get_balance();
    double value;
    cout << "How much do you want to deposit into account?" << endl;
    cin >> value;
    acc1.deposit(value);
    cout << "Balance after raising on " << value << " is ";
    acc1.get_balance();

}