#include <iostream>
using namespace std;
int main() {
    bool game_running = true;

    while (game_running) {
        cout << "You wake up on the floor in a dark room. A dimly lit torch is hanging on the wall to your left next to a chair and a table. The table seems to have items on it.\n";
        cout << "To your right, is a door, with the door opened a crack with darkness permeating through it. The slience of the room brings an intense sense of fear to you.\n";
        cout << "Behind you is the bed you woke up in, a pillow and blanket nowhere to be seen.\n";
        cout << "What do you do?\n";
        cout << "1. Look at the torch\n";
        cout << "2. Look at the door\n";
        cout << "3. Look at the bed\n";
        cout << "4. Look at the table.\n";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "The torch is dimly lit, the flame seems to bring a sense of comfort to you in the ever pressing darkness.";
                cout << "What will you do?\n";
                cout << "1. Go back\n";
                int choice1;
                cin >> choice1;
                switch (choice1) {
                    case 1:
                        cout << "You go back to the center of the room.";
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;
            case 2:
                cout << "The crack in the door is too dark to see through. Unease fills your body as you look at the door, like something could come out at any moment.";
                cout << "What will you do?\n";
                cout << "1. Open the door\n";
                cout << "2. Go back\n";
                int choice2;
                cin >> choice2;
                switch (choice2) {
                    case 1:
                        cout << "You open the door and walk through the door.";
                        break;
                    case 2:
                        cout << "You go back to the center of the room.";
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;
            case 3:
                cout << "The mattress is too soft to touch. You can feel the warmth of the bed, dispite the cold, dark room. You could just go back to sleep, forget all of this?";
                cout << "What will you do?\n";
                cout << "1. Go to sleep\n";\
                cout << "2. Go back\n";
                int choice3;
                cin >> choice3;
                switch (choice3) {
                    case 1:
                        cout << "You go back to sleep, and wake up in the same room.";
                        break;
                    case 2:
                        cout << "You go back to the center of the room.";
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;
            case 4:
                cout << "The table has a few items on it, a sword, dagger, and a grimoire.\n";
                cout << "What will you take?\n";
                cout << "1. The sword\n";
                cout << "2. The dagger\n";
                cout << "3. The grimoire\n";
                int choice4;
                cin >> choice4;
                switch (choice4) {
                    case 1:
                        cout << "You take the sword and put it in your bag.";
                        break;
                    case 2:
                        cout << "You take the dagger and put it in your bag.";
                        break;
                    case 3:
                        cout << "You take the grimoire and put it in your bag.";
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
        }
    return 0;
}