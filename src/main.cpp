#include <iostream>
#include <windows.h>

using namespace std;

string common_passwords[11] = {"qwerty", "password", "password123", "password1234", "12345", "qwerty123", "1q2w3e", "12345678", "111111", "1234567890", "stingz1234"};
string software[3] = {"HackerCracker", "p@$$W0rDcR@ck3R", "inJECTion"};
string hardware[3] = {"BotFarm", "SuperComputer", "QuantumComputer"};
int softwareVersions[3] = {0, 0, 10};
int hardwareQuant[3] = {0, 0, 0};

void flash() {
    system("cls");
    system("color A0");
    system("color 0A");
}

int main() {
    // setup
    SetConsoleTitle("TechnoDot's Adventure");
    string inventory[16];
    int coins = 100;
    int gems = 10;
    string password;

    cout << "Hello world! This is TechnoDot's Adventure, a hecking game for people who are not iD10+z. Have fun!" << endl << "Launching HeckerTerm in 3 seconds..." << endl;
    Sleep(3000);
    flash();

    cout << "Hello, Mr.Hecker. CHOOSE A SECURE PASSWORD NOWWW!!!" << endl << "Password: ";
    cin >> password;
    cout << "Your n00by password is \"" << password << "\". BRUH." << endl;
    bool contains = false;
    for (int i=0;i<12;i++) {
        if (common_passwords[i] == password) {
            contains = true;
        }
    }
    if (contains) {
        cout << "You don't deserve to be a hacker. You suck, you lose, you die, BYE-BYE!" << endl;
        exit(0);
    }

    string choice;
    string victim;
    string type;
    int id;
    flash();
    while (1) {
        cout << "> ";
        cin >> choice;
        if (choice == "help") {
            cout << "You don't need help." << endl;
        }
        if (choice.find("sudo") != string::npos) {
            cout << "What do you think this is, a Linux terminal? The prompt is different, iD10+!" << endl;
        }
        if (choice == "shop") {
            cout << "Software: " << endl;
            for (int i=0;i<3;i++) {
                cout << to_string(i + 1) << ". " << software[i] << " for " << to_string(i * 50 + 50) << " coins" << endl;
            }
            cout << "Hardware: " << endl;
            for (int i=0;i<3;i++) {
                cout << to_string(i + 1) << ". " << hardware[i] << " for " << to_string(i * 5 + 5) << " gems" << endl;
            }
            cout << "Software/Hardware (s/h): ";
            cin >> type;
            cout << "Item: ";
            cin >> id;;
            if (id > 3) {
                id = 3;
            }
            if (type == "s" || type == "S") {
                if (coins >= id * 50) {
                    softwareVersions[id] += 1;
                    coins -= id * 50;
                    cout << "Bought " << software[id] << " v" << to_string(softwareVersions[id]) << " for " << to_string(id * 50) << " coins. " << endl;
                }
            }
            if (type == "h" || type == "h") {
                if (gems >= id * 5) {
                    softwareVersions[id] += 1;
                    gems -= id * 5;
                    cout << "Bought " << hardware[id] << " v" << to_string(hardwareQuant[id]) << " for " << to_string(id * 5) << " gems. " << endl;
                }
            }
        }
        if (choice == "hack" || choice == "heck") {
            cout << "Who? ";
            cin >> victim;
            flash();
        }
        if (choice == "bal" || choice == "balance") {
            cout << "Coins: " << to_string(coins) << endl;
            cout << "Gems: " << to_string(gems) << endl;
        }
    }

    // end
    return 0;
}
