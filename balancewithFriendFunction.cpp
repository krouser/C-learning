#include <iostream>
 
class BankAccount
{
private:
    double balance;
 
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}
 
    friend double calculateTotalBalance(const BankAccount *accounts, int numAccounts);
};
 
double calculateTotalBalance(const BankAccount* accounts, int numAccounts)
{
    double totalBalance = 0.0;
 
    for (int i = 0; i < numAccounts; i++)
    {
        totalBalance += accounts[i].balance;
    }
 
    return totalBalance;
}
 
int main()
{
    BankAccount accounts[] = { BankAccount(1000.0), BankAccount(2000.0), BankAccount(3000.0) };
    int numAccounts = sizeof(accounts) / sizeof(accounts[0]);
 
    double totalBalance = calculateTotalBalance(accounts, numAccounts);
 
    std::cout << "Total Balance of " << numAccounts << " Bank Accounts is: $" << totalBalance << std::endl;
 
    return 0;
}