// dungeonMaster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class playerTypes {
};


class shield {
private:
    double defenceRating;
    double maxHealth;
    double currentHealth;
public:
    string name;
};

class weapon {
private:
    double attackRating;
    double maxHealth;
    double currentHealth;
public:
    string name;
};

class Human {
private:
    double maxHealthPodoubles = 100;
    double attack = 10; //good at attack
    double doubleelligence = 10;   //humans are dumb
    double arguingSkills = 5; //humans love arguing
public:
    shield someShield;
    weapon someWeapon;   
};

class Elf {
private:
    double maxHealthPodoubles = 100;
    double attack = 5.5;    //not good at attack
    double doubleelligence = 20; //elves are smart
    double singingSkills = 5; //Elves love singing
public:
    shield someShield;
    weapon someWeapon;
};

class Half_Human_Half_Elf : public Human, public Elf {
private:
    double mindReading = 5;  //the half-elf half-human class can... read minds?!
};

void characterClass() {
    while (true) {
        cout << "Hey there! What kind of creature are you? Human, elf, or a halfsy?" << endl;
        string answer;
        cin >> answer;
        if (answer == "human") {
            cout << "A human, eh? A real rabble-rouser!" << endl;
            Human character1;
            return;
        }
        else if (answer == "elf") {
            cout << "An elf, eh? Play the flute for me, please!" << endl;
            Elf character1;
            return;
        }
        else if (answer == "halfsy") {
            cout << "A halfsy, eh? Please don't read my mind!" << endl;
            Half_Human_Half_Elf character1;
            return;
        }
        else
        {
            cout << "Sorry, there aren't any " << answer << " in this story! Try again." << endl;
        }
    };
};

int main()
{
    /* 
    while (true) {
        cout << "Hey there! What kind of creature are you? Human, elf, or a halfsy?" << endl;
        string answer;
        cin >> answer;
        if (answer == "human") {
            cout << "A human, eh? A real rabble-rouser!" << endl;
            Human character1;
            return 0;
        }
        else if (answer == "elf") {
            cout << "An elf, eh? Play the flute for me, please!" << endl;
            Elf character1;
            return 0;
        }
        else if (answer == "halfsy") {
            cout << "A halfsy, eh? Please don't read my mind!" << endl;
            Half_Human_Half_Elf character1;
            return 0;
        }
        else
        {
            cout << "Sorry, there aren't any " << answer << " in this story! Try again." << endl;
        }
    };
    */
    characterClass();
    return 0;
}