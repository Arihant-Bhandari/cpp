// Design a class to represent a bank account. Include the following members.
// Data Members
    // Name of the depositor
    // Account number
    // Type of account
    // Balance amount in the account
// Methods
    // To assign initial values
    // To deposit an amount
    // To withdraw an amount after checking balance
    // To display the name and balance
// Incorporate a constructor to provide initial values.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// class Account
// {
//     protected:
//     string customerName;
//     string accountNumber;
//     string accountType;
//     double balance;

//     public:
//     Account()
//     {
//         customerName = "NULL";

//         accountNumber = "NULL";

//         accountType = "NULL";

//         balance = 0.0;
//     }
//     void initialize(string name, string number, string type, double amount)
//     {
//         customerName = name;

//         accountNumber = number;

//         accountType = type;

//         balance = amount;
//     }
//     void deposit(double amount)
//     {
//         if(amount <= 0)
//         {
//             cout << "Invalid deposit amount.Please enter a positive value." << endl;
//             return;
//         }
//         else
//         {
//             balance += amount;
//             cout << "Deposited $"<< fixed << setprecision(2) << amount << ". Newbalance : $ " << balance << endl;
//         }
//     }

//     void withdraw(double amount)
//     {
//         if (amount > balance && balance > 0)
//         {
//             cout << "Invalid withdrawal amount." << endl;
//             cout << "Current balance: " << balance << endl;
//             return;
//         }
//         else
//         {
//             balance -= amount;

//             cout << "Withdrew $"<< fixed << setprecision(2) << amount << ". Newbalance : $ " << balance << endl;
//         }
//     }

//     double getBalance()
//     {
//         return balance;
//     }

//     void displayInfo()
//     {
//         cout << "Customer Name: " << customerName << endl;

//         cout << "Balance: $" << fixed << setprecision(2) << getBalance() << endl;
//     }
// };

// int main()
// {
//     string name, number, type;
//     double balance;
//     cout<<"Enter Name of the Customer: ";
//     cin>>name;
//     cout<<"Enter Account Number: ";
//     cin>>number;
//     cout<<"Enter Type of Bank Account: ";
//     cin>>type;
//     cout<<"Enter Balance: ";
//     cin>>balance;

//     int credit, debit;

//     Account acc;

//     acc.initialize(name,number,type,balance);

//     cout<<"Enter Amount to be deposited: ";
//     cin>>credit;
//     acc.deposit(credit);

//     cout<<"Enter Amount to be withdrawn: ";
//     cin>>debit;
//     acc.withdraw(debit);

//     acc.displayInfo();

//     return 0;
// }

// #include <iostream>
// #include <random>
// using namespace std;

// int main()
// {
//     random_device rd;

//     mt19937 gen(rd());

//     uniform_int_distribution<int> dist(1, 1000);
//     int secret_number = dist(gen);

//     bool playing = true;

//     int guess;

//     while (playing)
//     {
//         cout<< "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess : ";

//         cin >> guess;

//         if (guess == secret_number)
//         {

//             cout << "\nExcellent! You guessed the number !\n" << endl;
//             playing = false;
//         }
//         else if (guess < secret_number)
//         {
//             cout << "\nToo low. Try again.\n" << endl;
//         }
//         else
//         {
//             cout << "\nToo high. Try again.\n" << endl;
//         }
//     }

//     char play_again;

//     cout << "Would you like to play again (y/n)? ";

//     cin >> play_again;

//     if (tolower(play_again) == 'y')
//         main();
//     else
//         cout << "\nThanks for playing !\n" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

class Account
{
    protected:
    string customerName;
    int accountNumber;
    double balance;

    public:
    void initializeAccount(string name, int number, double initialBalance)
    {
        customerName = name;
        accountNumber = number;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void displayBalance()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: " << balance << endl;
    }

    void computeInterest() {}
    void withdraw(double amount) {}
};

class SavingAccount : public Account
{
private:
    double interestRate;

public:
    void initializeSavingAccount(string name, int number, double initialBalance, double rate)
    {
        initializeAccount(name, number, initialBalance);
        interestRate = rate;
    }

    void computeInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest earned: " << interest << endl;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
            cout << "Current balance: " << balance << endl;
        }
    }
};

class CurrentAccount : public Account
{
private:
    double minimumBalance;

public:
    void initializeCurrentAccount(string name, int number, double initialBalance, double minBalance)
    {
        initializeAccount(name, number, initialBalance);
        minimumBalance = minBalance;
    }

    void withdraw(double amount)
    {
        if (amount > 0)
        {
            if (balance - amount >= minimumBalance)
            {
                balance -= amount;
                cout << "Withdrawal successful. New balance: " << balance << endl;
            }
            else
            {
                cout << "Insufficient funds. Minimum balance required: " << minimumBalance << endl;
                balance -= 350;
                cout << "Current balance: " << balance << endl;
            }
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
};

int main()
{
    SavingAccount saving;
    CurrentAccount current;

    string savingName;
    int savingNumber,savingCredit,savingDebit;
    double savingBalance;

    cout<<"Enter Customer's Name, Account Number, Balance, as well as amount to be credited into and debit from account: ";
    cin>>savingName>>savingNumber>>savingBalance>>savingCredit>>savingDebit;

    saving.initializeSavingAccount(savingName,savingNumber,savingBalance,3.5);
    saving.deposit(savingCredit);
    saving.withdraw(savingDebit);
    saving.computeInterest();
    saving.displayBalance();

    string currentName;
    int currentNumber,currentCredit,currentDebit;
    double currentBalance;

    cout<<"Enter Customer's Name, Account Number, Balance, as well as amount to be credited into and debit from account: ";
    cin>>currentName>>currentNumber>>currentBalance>>currentCredit>>currentDebit;
    
    current.initializeCurrentAccount(currentName,currentNumber,currentBalance,1500);
    current.deposit(currentCredit);
    current.withdraw(currentDebit);
    current.displayBalance();

    return 0;
}