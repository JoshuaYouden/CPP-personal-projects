#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int computer(int difficulty) {

    srand(time(0));

    if (difficulty == 1) {
        int computer_choice = (rand() % 10 + 1);

        cout << "The computer chose: " << computer_choice << endl;

        return computer_choice;
    }

    else if (difficulty == 2) {
        int computer_choice = (rand() % 50 + 1);

        cout << "The computer chose: " << computer_choice << endl;

        return computer_choice;
    }

    else if (difficulty == 3) {
        int computer_choice = (rand() % 100 + 1);

        cout << "The computer chose: " << computer_choice << endl;

        return computer_choice;
    }
}

void result(int user_choice, int computer_choice) {
    if (user_choice == computer_choice) {
        cout << "Congratulations, you guessed correctly! \n";
    }

    else {
        cout << "Sorry, you guessed incorrectly, better luck next time! \n";
    }
}

int main() {
    cout << "Welcome to the guessing game! \n";
    cout << "Choose your difficulty: \n1. Easy \n2. Medium \n3. Hard \nChoice: ";

    int difficulty;
    int user_choice;
    cin >> difficulty;

    switch (difficulty)
    {
    case 1:
        cout << "You chose easy difficulty!" << endl;
        break;
    
    case 2:
        cout << "You chose medium difficulty!" << endl;
        break;
    
    case 3:
        cout << "You chose hard difficulty!" << endl;
        break;
    
    default:
        cout << "Invalid input, please enter a valid number: ";
        cin >> difficulty;
        break;
    }

    if (difficulty == 1) {
        cout << "Enter a number between 1 and 10: ";

        cin >> user_choice;

        if (user_choice < 1 || user_choice > 10) {
            cout << "Invalid input, please enter a number between 1 and 10: ";
            cin >> user_choice;
        }

        cout << "You chose: " << user_choice << endl;
    }

    else if (difficulty == 2) {
        cout << "Enter a number between 1 and 50: ";

        cin >> user_choice;

        if (user_choice < 1 || user_choice > 50) {
            cout << "Invalid input, please enter a number between 1 and 50: ";
            cin >> user_choice;
        }

        cout << "You chose: " << user_choice << endl;
    }

    else if (difficulty == 3) {
        cout << "Enter a number between 1 and 100: ";

        cin >> user_choice;

        if (user_choice < 1 || user_choice > 100) {
            cout << "Invalid input, please enter a number between 1 and 100: ";
            cin >> user_choice;
        }

        cout << "You chose: " << user_choice << endl;
    }

    int computer_choice = computer(difficulty);
    result(user_choice, computer_choice);
    return 0;
}