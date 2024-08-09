// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// // Weapon class
// class Weapon {
// private:
//     string name;
//     int damage;

// public:
//     Weapon(string weaponName, int weaponDamage) : name(weaponName), damage(weaponDamage) {}

//     int getDamage() const {
//         return damage;
//     }

//     string getName() const {
//         return name;
//     }
// };

// // Soldier class
// class Soldier {
// private:
//     string name;
//     int health;
//     Weapon weapon;

// public:
//     Soldier(string soldierName, int soldierHealth, Weapon soldierWeapon) 
//         : name(soldierName), health(soldierHealth), weapon(soldierWeapon) {}

//     int getHealth() const {
//         return health;
//     }

//     string getName() const {
//         return name;
//     }

//     void takeDamage(int damage) {
//         health -= damage;
//         if (health < 0) health = 0;
//     }

//     bool isAlive() const {
//         return health > 0;
//     }

//     void attack(Soldier& target) {
//         cout << name << " attacks " << target.getName() << " with " << weapon.getName() << " causing " << weapon.getDamage() << " damage!" << endl;
//         target.takeDamage(weapon.getDamage());
//     }
// };

// // Game class
// class Game {
// private:
//     vector<Soldier> player1Soldiers;
//     vector<Soldier> player2Soldiers;

// public:
//     Game(vector<Soldier> p1Soldiers, vector<Soldier> p2Soldiers) 
//         : player1Soldiers(p1Soldiers), player2Soldiers(p2Soldiers) {}

//     void startGame() {
//         int turn = 0;

//         while (true) {
//             cout << "Turn " << turn + 1 << endl;
            
//             // Player 1 attacks Player 2
//             if (!player1Soldiers.empty() && !player2Soldiers.empty()) {
//                 player1Soldiers[0].attack(player2Soldiers[0]);
//                 if (!player2Soldiers[0].isAlive()) {
//                     cout << player2Soldiers[0].getName() << " has died!" << endl;
//                     player2Soldiers.erase(player2Soldiers.begin());
//                 }
//             }

//             // Player 2 attacks Player 1
//             if (!player2Soldiers.empty() && !player1Soldiers.empty()) {
//                 player2Soldiers[0].attack(player1Soldiers[0]);
//                 if (!player1Soldiers[0].isAlive()) {
//                     cout << player1Soldiers[0].getName() << " has died!" << endl;
//                     player1Soldiers.erase(player1Soldiers.begin());
//                 }
//             }

//             if (player1Soldiers.empty()) {
//                 cout << "Player 2 wins!" << endl;
//                 break;
//             } else if (player2Soldiers.empty()) {
//                 cout << "Player 1 wins!" << endl;
//                 break;
//             }

//             turn++;
//         }
//     }
// };

// // Main function to test the game
// int main() {
//     // Create some weapons
//     Weapon sword("Sword", 25);
//     Weapon bow("Bow", 15);

//     // Create soldiers for Player 1
//     Soldier p1Soldier1("Knight", 100, sword);
//     Soldier p1Soldier2("Archer", 75, bow);

//     // Create soldiers for Player 2
//     Soldier p2Soldier1("Warrior", 100, sword);
//     Soldier p2Soldier2("Hunter", 75, bow);

//     // Put soldiers into armies
//     vector<Soldier> player1Soldiers = {p1Soldier1, p1Soldier2};
//     vector<Soldier> player2Soldiers = {p2Soldier1, p2Soldier2};

//     // Start the game
//     Game game(player1Soldiers, player2Soldiers);
//     game.startGame();

//     return 0;
// }
