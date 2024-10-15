#include <iostream>
#include <iomanip>
 
class BankAccount
{
 
public:
    BankAccount(double startAmount):
      balance (startAmount)
    {
            }
 
    void deposit(double amount)
    {
        balance += amount;
    }
 
    double getBalance() const
    {
        return balance;
    }
private:
    double balance;
 
};
 
int main()
{
    double startAmount = 200.0;
    BankAccount myAccount(startAmount);
 
    double accountBalance = myAccount.getBalance();
    std::cout << "Current balance: $" << std::fixed << std::setprecision(2) << accountBalance << std::endl;
 
    double depositAmount;
    std::cout << "Enter the deposit amount (USD): $";
    std::cin >> depositAmount;
 
    myAccount.deposit(depositAmount);
    accountBalance = myAccount.getBalance();
 
    std::cout << "Updated balance: $" << std::fixed << std::setprecision(2) << accountBalance << std::endl; 
 
    return 0;
}