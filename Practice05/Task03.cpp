#include "iostream"
#include <stdlib.h>
#include <time.h>

int getUserChoice()
{
    int user_choice;

    std :: cout << "1. Rock\n2. Scissors\n3. Paper\n\n";
    std :: cout << "Enter your choice: ";
    std :: cin >> user_choice;

    while (user_choice <= 0 || user_choice > 3)
    {
        std :: cout << "\n-------Invalid Option-------\n\n";
        std :: cout << "1. Rock\n2. Scissors\n3. Paper\n\n";
        std :: cout << "Enter valid option: ";
        std :: cin >> user_choice;
    }

    return user_choice;
}
int calculateResults(int computer_choice, int user_choice)
{
    std :: cout << "Computer choses " << computer_choice << "\n\n";

    switch (user_choice)
    {
    case 1:
        if (computer_choice == 1)
            return 0;
        else if (computer_choice == 2)
            return 1;
        else if (computer_choice == 3)
            return -1;
        break;

    case 2:
        if (computer_choice == 1)
            return -1;
        else if (computer_choice == 2)
            return 0;
        else if (computer_choice == 3)
            return 1;
        break;

    case 3:
        if (computer_choice == 1)
            return 1;
        else if (computer_choice == 2)
            return -1;
        else if (computer_choice == 3)
            return 0;
        break;
    }
}

int main()
{
    int computer_choice, user_choice, result;
    char playAgain;

    do
    {
        srand(time(0));
        computer_choice = rand() % 3 + 1;

        std :: cout << "\n-------Game Start-------\n\n";

        user_choice = getUserChoice();

        result = calculateResults(computer_choice, user_choice);

        if (result == 1)
        {
            std :: cout << "You won" << "\n";
        }
        else if (result == -1)
        {
            std :: cout << "You lost" << "\n";
        }
        else
        {
            std :: cout << "Draw" << "\n";
        }

        std :: cout << "Want to play again(y/n): ";
        std :: cin >> playAgain;
    } while (playAgain == 'y');

    std :: cout << "\nClosing the Game. The Good Bye!" << "\n";

    return 0;
}