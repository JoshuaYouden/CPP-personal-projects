#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int computer() {
        srand(time(0));
        int computer_choice = (rand() % 3 + 1);

        if (computer_choice == 1)
        {
            cout << "The computer chose rock! \n";
        }
        else if (computer_choice == 2)
        {
            cout << "The computer chose paper! \n";
        }
        else if (computer_choice == 3)
        {
            cout << "The computer chose scissors! \n";
        }

        return computer_choice;
    }

void result(int user_choice, int computer_choice) {
        if (user_choice == computer_choice)
        {
            cout << "It's a tie, try again! \n";
        }
        else if ((user_choice == 1 && computer_choice == 3) || (user_choice == 2 && computer_choice == 1) || (user_choice == 3 && computer_choice == 2))
        {
            cout << "You win! \n";
        }
        else
        {
            cout << "You lose! \n";
        }
    }

int main() {
        cout << "Welcome to rock paper scissors!";
        cout << "Choose one of the following: \n1. Rock\n2. Paper\n3. Scissors \nChoice: ";

        int user_choice;
        cin >> user_choice;

        if (user_choice == 1)
        {
            cout << "You chose rock! \n";
        }
        else if (user_choice == 2)
        {
            cout << "You chose paper! \n";
        }
        else if (user_choice == 3)
        {
            cout << "You chose scissors! \n";
        }
        else
        {
            cout << "Invalid choice, please choose 1, 2, or 3! \n" << endl;

            exit(0);
        }

        int computer_choice = computer();
        result(user_choice, computer_choice);
        return 0;
    }
