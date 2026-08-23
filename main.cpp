#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>

class BankAccount{

    double balance;

public:

    void setBalance(double b){
        if (b < 0){
            balance = -b;
            std::cout << "Loan Reminder: Return " << balance << " rupees ASAP!\n";
            balance = 0;
        }

        else{
            balance = b;
        }
    }
    double getBalance() const{
        if (balance < 0){
            return 0.0;
        }
        else{return balance;}
    }

    void withdraw(double amount){
        if (balance >= amount){
            std::cout << "Amount: " << amount << " rupees withdrawed from you account.\n----------------------------------------------------------\n";
            balance -= amount;

        }

        else{
            char a;
            std::cout << "Insufficent Balance!\n Wanna take loan? (Y/N) ";
            std::cin >> a;

            if (a == 'Y' || a == 'y'){

                if(balance > -5000){
                    std::cout << "Amount: " << amount << " withdrawed from you account.\n----------------------------------------------------------\n";
                    balance -= amount;
                    std::cout << "Loan Amount: " << -balance << "\n";
                }
                else{
                    std::cout << "Pay previous loans first!\n";
                    std::cout << "Loan Amount: " << -balance << "\n";
                    std::cout << "Failed to withdraw the amount!\n----------------------------------------------------------\n";
                }
            }

            else {
                std::cout << "Failed to withdraw the amount!\n----------------------------------------------------------\n";
            }
        }
    }

    void withdraw(double amount, double fee){
        if (balance >= (amount+fee)){
            std::cout << "Amount: " << amount << " rupees withdrawed from you account.\n ----------------------------------------------------------\n";
            balance -= (amount+fee);

        }

        else{
            char a;
            std::cout << "Insufficent Balance!\n Wanna take loan? (Y/N) ";
            std::cin >> a;

            if (a == 'Y' || a == 'y'){
                if(balance > -5000){
                    std::cout << "Amount: " << (amount+fee) << "withdrawed from you account.\n----------------------------------------------------------\n";
                    balance -= (amount+fee);
                    std::cout << "Loan Amount: " << -balance << "\n";
                }
                else{
                    std::cout << "Pay previous loans first!\n";
                    std::cout << "Loan Amount: " << -balance << "\n";
                    std::cout << "Failed to withdraw the amount!\n----------------------------------------------------------\n";
                }
            }

            else {
                std::cout << "Failed to withdraw the amount!\n----------------------------------------------------------\n";
            }
        }
    }
};

int main(){

    BankAccount t1;

    t1.setBalance(20000);

    t1.withdraw(5000);

    std::cout << "Remaining Balance: " << t1.getBalance() << " rupees! (Processing fee deducted (if any))\n";

    return 0;
}