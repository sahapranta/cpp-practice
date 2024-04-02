#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "\033[0;34m******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\033[0m\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "\033[1;32mThanks for choosing us.\033[0m\n";
            break;
        default:
            std::cout << "\033[1;31mInvalid Choice.\033[0m\n";
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Balance: \033[1;33m$" << std::setprecision(2) << std::fixed << balance << "\033[0m" << std::endl;
}

double deposit()
{
    double amount = 0;

    std::cout << "\033[1;36mEnter amount of deposit: \033[0m";
    std::cin >> amount;

    if (amount <= 0)
    {
        std::cout << "\033[1;31mYou must deposit at least one or above.\033[0m\n";
    }
    else
    {
        return amount;
    }

    return 0;
}

double withdraw(double balance)
{
    double amount = 0;

    std::cout << "\033[1;36mEnter amount of withdraw: \033[0m";
    std::cin >> amount;

    if (amount <= 0)
    {
        std::cout << "\033[1;31mYou must enter at least 1 or above!\033[0m" << std::endl;
    }
    else if (amount > balance || balance <= 0)
    {
        std::cout << "\033[1;31mYou don't have enough balance!\033[0m" << std::endl;
    }
    else
    {
        return amount;
    }

    return 0;
}
