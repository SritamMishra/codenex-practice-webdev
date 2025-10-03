#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num, guess, tries = 0;
    const int MAX_TRIES = 7;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "****** GUESS THE NUMBER (1 to 100) ******\n";
    cout << "You have " << MAX_TRIES << " attempts. Good luck!\n";

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;
        tries++;

        int diff = abs(guess - num);

        if (guess == num) {
            cout << "🎉 CORRECT! You guessed it in " << tries << " tries!\n";
            break;
        } else {
            if (diff <= 5) {
                cout << "🔥 Very Close! ";
            }

            if (guess > num) {
                cout << "Too High!";
            } else {
                cout << "Too Low!";
            }

            cout << " (Attempts left: " << MAX_TRIES - tries << ")\n";

            if (tries == MAX_TRIES - 1) {
                cout << "⚠️ Last attempt remaining! Make it count!\n";
            }
            if(tries==0){
                cout<<"If you want to continue pay $100!";
            }
        }
    } while (tries < MAX_TRIES);

    if (guess != num) {
        cout << "\n❌ You've used all your attempts! The correct number was: " << num << "\n";
    }

    cout << "\n*********** GAME OVER ***********\n";
    return 0;

    
    


}
