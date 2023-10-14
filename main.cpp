// Abuzerbank.cpp

/*
TODO:
- [X] Money transfer between accounts
- [X] Add a new account
- [X] Delete an account
- [X] Change password
- [X] Pay bills
- [X] Withdraw money from the account
- [X] Earn money
- [X] Exit
- [X] Register
- [X] Login
- [X] Random budget
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>
#include <random>
using namespace std;

int main()
{
    string username;
    int entry;
    int password;
    int choice;
    int getMoney;
    int payBills;
    int earnMoney;
    int budget = 1000;
    string name = "Abuzer";

    cout << "Welcome to Abuzerbank" << endl;

    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "---> ";

    cin >> entry;

    if (entry == 1)
    {
        cout << "Please enter your name: ";
        cin >> username;
        cout << "Please enter your password: ";
        cin >> password;
        cout << endl;

        if (username == "abuzer" && password == 1)
        {
            cout << "Welcome to Abuzerbank, " << name << endl;
            cout << "Your budget is " << budget << endl;
            cout << endl;

            cout << "What do you want to do? " << endl;
            cout << "1. Withdraw money from the account" << endl;
            cout << "2. Pay bills from the account" << endl;
            cout << "3. Earn money" << endl;
            cout << "4. Exit" << endl;
            cout << endl;

            cout << "5. Change password" << endl;
            cout << "6. Delete an account" << endl;
            cout << "7. Money transfer between accounts" << endl;

            cout << "---> ";

            cin >> choice;
            if (choice == 1)
            {
                cout << "How much money do you want to get? ";
                cin >> getMoney;

                if (getMoney > budget)
                {
                    cout << "You don't have enough money!" << endl;
                }
                else
                {
                    budget = budget - getMoney;
                    cout << "You have " << budget << " left." << endl;
                }
            }
            else if (choice == 2)
            {
                cout << "Pay bills: (1.Electic bills) (2.Water bills) (3.Other bills):  ";
                cin >> payBills;

                if (payBills == 1)
                {
                    cout << "How much money do you want to pay for electric bills? ";
                    cin >> getMoney;

                    if (getMoney > budget)
                    {
                        cout << "You don't have enough money!" << endl;
                    }
                    else
                    {
                        budget = budget - getMoney;
                        cout << "You have " << budget << " left." << endl;
                    }
                }
                else if (payBills == 2)
                {
                    cout << "How much money do you want to pay for water bills? ";
                    cin >> getMoney;

                    if (getMoney > budget)
                    {
                        cout << "You don't have enough money!" << endl;
                    }
                    else
                    {
                        budget = budget - getMoney;
                        cout << "You have " << budget << " left." << endl;
                    }
                }
                else if (payBills == 3)
                {
                    cout << "How much money do you want to pay for other bills? ";
                    cin >> getMoney;

                    if (getMoney > budget)
                    {
                        cout << "You don't have enough money!" << endl;
                    }
                    else
                    {
                        budget = budget - getMoney;
                        cout << "You have " << budget << " left." << endl;
                    }
                }
                else
                {
                    cout << "You entered wrong number!" << endl;
                }
            }
            else if (choice == 3)
            {
                cout << "How much money do you want to earn? ";
                cin >> earnMoney;

                budget = budget + earnMoney;
                cout << "You have " << budget << " left." << endl;
            }

            else if (choice == 4)
            {
                /*exit*/
                exit(0);
            }

            else if (choice == 5)
            {
                /*change password*/
                int newPassword1;
                int newPassword2;
                int passwordAgain;
                cout << "Please enter your current password: ";
                cin >> passwordAgain;

                if (passwordAgain == password)
                {
                    cout << "Your password is correct!" << endl;
                    cout << "Please enter your new password: ";
                    cin >> newPassword1;

                    cout << "Please enter your new password again: ";
                    cin >> newPassword2;
                    cout << endl;

                    if (newPassword1 == newPassword2)
                    {
                        cout << "Your password has been changed!" << endl;
                    }
                    else
                    {
                        cout << "Your passwords are not same!" << endl;
                    }
                }

                else
                {
                    cout << "Your password is wrong!" << endl;
                }
            }

            else if (choice == 6)
            {
                /*delete account*/
                string deleteAccount;
                string correctionUsername;
                int correctionPassword;

                cout << "Please enter your name: ";
                cin >> correctionUsername;
                cout << "Please enter your password: ";
                cin >> correctionPassword;

                if (correctionUsername == username && correctionPassword == password)
                {
                    cout << "Are you sure you want to delete your account? (yes/no) ";
                    cin >> deleteAccount;

                    if (deleteAccount == "yes")
                    {
                        cout << "Your account has been deleted!" << endl;
                    }
                    else if (deleteAccount == "no")
                    {
                        cout << "Your account has not been deleted!" << endl;
                    }
                    else
                    {
                        cout << "You entered wrong word!" << endl;
                    }
                }
                else
                {
                    cout << "Wrong name or password!" << endl;
                }
            }

            else if (choice == 7)
            {
                /*money transfer betweeen accounts*/
                string transferAccount;
                int transferMoney;
                string correctionUsername;
                int correctionPassword;
                int iban;

                cout << "Please enter your name: ";
                cin >> correctionUsername;
                cout << "Please enter your password: ";
                cin >> correctionPassword;

                if (correctionUsername == username && correctionPassword == password)
                {
                    cout << "Please enter the account you want to transfer money: ";
                    cin >> transferAccount;

                    cout << "IBAN: ";
                    cin >> iban;

                    if (transferAccount == username)
                    {
                        cout << "You can't transfer money to your own account!" << endl;
                    }
                    else
                    {
                        cout << "How much money do you want to transfer? ";
                        cin >> transferMoney;

                        if (transferMoney > budget)
                        {
                            cout << "You don't have enough money!" << endl;
                        }
                        else
                        {
                            budget = budget - transferMoney;
                            cout << "You have " << budget << " left." << endl;
                        }
                    }
                }
                else
                {
                    cout << "Wrong name or password!" << endl;
                }
            }
        }

        else
        {
            cout << "Wrong name or password!" << endl;
        }
    }

    else if (entry == 2)
    {
        // Register
        string username1;
        int password1;
        int randomBudget = rand() % 1000; // get random number between 1000 and 10000

        cout << "Please enter your name: ";
        cin >> username1;
        cout << "Please enter your password: ";
        cin >> password1;
        cout << endl;

        cout << "What do you want to do? " << endl;
        cout << "1. Withdraw money from the account" << endl;
        cout << "2. Pay bills from the account" << endl;
        cout << "3. Earn money" << endl;
        cout << "4. Exit" << endl;
        cout << endl;

        cout << "5. Change password" << endl;
        cout << "6. Delete an account" << endl;
        cout << "7. Money transfer between accounts" << endl;

        cout << "---> ";

        cin >> choice;
        if (choice == 1)
        {
            cout << "How much money do you want to get? ";
            cin >> getMoney;

            if (getMoney > randomBudget)
            {
                cout << "You don't have enough money!" << endl;
            }
            else
            {
                randomBudget = randomBudget - getMoney;
                cout << "You have " << randomBudget << " left." << endl;
            }
        }
        else if (choice == 2)
        {
            cout << "Pay bills: (1.Electic bills)(2.Water bills)(3.Other bills):  ";
            cin >> payBills;

            if (payBills == 1)
            {
                cout << "How much money do you want to pay for electric bills? ";
                cin >> getMoney;

                if (getMoney > randomBudget)
                {
                    cout << "You don't have enough money!" << endl;
                }
                else
                {
                    randomBudget = randomBudget - getMoney;
                    cout << "You have " << randomBudget << " left." << endl;
                }
            }
            else if (payBills == 2)
            {
                cout << "How much money do you want to pay for water bills? ";
                cin >> getMoney;

                if (getMoney > randomBudget)
                {
                    cout << "You don't have enough money!" << endl;
                }
                else
                {
                    randomBudget = randomBudget - getMoney;
                    cout << "You have " << randomBudget << " left." << endl;
                }
            }
            else if (payBills == 3)
            {
                cout << "How much money do you want to pay for other bills? ";
                cin >> getMoney;

                if (getMoney > randomBudget)
                {
                    cout << "You don't have enough money!" << endl;
                }
                else
                {
                    randomBudget = randomBudget - getMoney;
                    cout << "You have " << randomBudget << " left." << endl;
                }
            }
            else
            {
                cout << "You entered wrong number!" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "How much money do you want to earn? ";
            cin >> earnMoney;

            randomBudget = randomBudget + earnMoney;
            cout << "You have " << randomBudget << " left." << endl;
        }

        else if (choice == 4)
        {
            /*exit*/
            exit(0);
        }

        else if (choice == 5)
        {
            /*change password*/
            int newPassword1;
            int newPassword2;
            int passwordAgain;
            cout << "Please enter your current password: ";
            cin >> passwordAgain;

            if (passwordAgain == password1)
            {
                cout << "Your password is correct!" << endl;
                cout << "Please enter your new password: ";
                cin >> newPassword1;

                cout << "Please enter your new password again: ";
                cin >> newPassword2;
                cout << endl;

                if (newPassword1 == newPassword2)
                {
                    cout << "Your password has been changed!" << endl;
                }
                else
                {
                    cout << "Your passwords are not same!" << endl;
                }
            }

            else
            {
                cout << "Your password is wrong!" << endl;
            }
        }

        else if (choice == 6)
        {
            /*delete account*/
            string deleteAccount;
            string correctionUsername;
            int correctionPassword;

            cout << "Please enter your name: ";
            cin >> correctionUsername;
            cout << "Please enter your password: ";
            cin >> correctionPassword;

            if (correctionUsername == username1 && correctionPassword == password1)
            {
                cout << "Are you sure you want to delete your account? (yes/no) ";
                cin >> deleteAccount;

                if (deleteAccount == "yes")
                {
                    cout << "Your account has been deleted!" << endl;
                }
                else if (deleteAccount == "no")
                {
                    cout << "Your account has not been deleted!" << endl;
                }
                else
                {
                    cout << "You entered wrong word!" << endl;
                }
            }
            else
            {
                cout << "Wrong name or password!" << endl;
            }
        }

        else if (choice == 7)
        {
            /*money transfer betweeen accounts*/
            string transferAccount;
            int transferMoney;
            string correctionUsername;
            int correctionPassword;
            int iban;

            cout << "Please enter your name: ";
            cin >> correctionUsername;
            cout << "Please enter your password: ";
            cin >> correctionPassword;

            if (correctionUsername == username1 && correctionPassword == password1)
            {
                cout << "Please enter the account you want to transfer money: ";
                cin >> transferAccount;

                cout << "IBAN: ";
                cin >> iban;

                if (transferAccount == username1)
                {
                    cout << "You can't transfer money to your own account!" << endl;
                }
                else
                {
                    cout << "How much money do you want to transfer? ";
                    cin >> transferMoney;

                    if (transferMoney > randomBudget)
                    {
                        cout << "You don't have enough money!" << endl;
                    }
                    else
                    {
                        randomBudget = randomBudget - transferMoney;
                        cout << "You have " << randomBudget << " left." << endl;
                    }
                }
            }
            else
            {
                cout << "Wrong name or password!" << endl;
            }
        }

        else
        {
            cout << "Wrong name or password!" << endl;
        }

        system("pause");
        return 0;
    }
}