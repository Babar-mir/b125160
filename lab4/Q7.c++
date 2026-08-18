#include <iostream>
#include <string>
using namespace std;



class GameManager;

class Player {
private:
    string playerName;
    int health;
    int score;
    int level;

public:
    void getInput() {
        cout << "Enter Player Name: ";
        cin.ignore();
        getline(cin, playerName);

        cout << "Enter Health: ";
        cin >> health;

        cout << "Enter Score: ";
        cin >> score;

        cout << "Enter Level: ";
        cin >> level;
    }

    // Declare GameManager as a friend class
    friend class GameManager;
};

class GameManager {
public:
    // 1. Display player details
    void displayDetails(Player p) {
        cout << "\n----- Player Details -----" << endl;
        cout << "Name  : " << p.playerName << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score : " << p.score << endl;
        cout << "Level : " << p.level << endl;
    }

    // 2. Check whether the player is alive
    void checkAlive(Player p) {
        if (p.health > 0)
            cout << "Player Status: Alive" << endl;
        else
            cout << "Player Status: Not Alive" << endl;
    }

    // 3. Display the player's current level and score
    void displayLevelAndScore(Player p) {
        cout << "Current Level: " << p.level << endl;
        cout << "Current Score: " << p.score << endl;
    }
};

int main() {
    Player player1;
    cout << "Enter details for the player:" << endl;
    player1.getInput();

    GameManager manager;
    manager.displayDetails(player1);
    manager.checkAlive(player1);
    manager.displayLevelAndScore(player1);

    return 0;
}