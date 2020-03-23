#include <iostream>
using namespace std;


#include "electionRound.h"

int main() {
    ElectionRound eR1;


    //new citizen 2 - in menu
    char citizenName[20];
    int id;
    int birth_year;
    int ballot_box;
    cout << "Enter new citizen name" << endl;
    cin >> citizenName;

    cout << "Enter new citizen id" << endl;
    cin >> id;

    cout << "Enter new citizen year of birth" << endl;
    cin >> birth_year;

    cout << "Enter new citizen ballot box id" << endl;
    cin >> ballot_box;

    eR1.init();
    eR1.addCitizen(citizenName,id,birth_year,ballot_box);

    //new party 3 - in menu
    char partyName[20];
    int faction;
    int year;
    int month;
    int day;

    cout << "Enter new party name" << endl;
    cin >> partyName;

    cout << "Enter the party political Factions [0- Right, 1- Center, 2- Left]: " << endl;
    cin >> faction;

    cout << "Enter the party creation date, first enter the year" << endl;
    cin >> year;

    cout << "Enter the party creation date, second enter the month" << endl;
    cin >> month;

    cout << "Enter the party creation date, third enter the day" << endl;
    cin >> day;

    eR1.addParty(partyName,faction,year,month,day);


    //new citizen as party candid, its a new citizen?
    //show all the parties and choose the number
    int party;
    int partyLocation;

    cout << "Enter the party number" << endl;
    cin >> party;

    cout << "Enter the candid number in the party" << endl;
    cin >> partyLocation;

    eR1.addCitizenToParty(party,partyLocation);















}