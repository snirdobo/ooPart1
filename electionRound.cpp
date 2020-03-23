#include <iostream>
using namespace std;

#include "electionRound.h"

void ElectionRound::init()
{
    month = 10;
    year = 1970;

    numOfElectors = 10;
    sizeOfElectorsArray = 10;

    numOfParties = 10;
    sizeOfPartiesArray = 10;

    electors = new Citizen*[numOfElectors];
    parties = new Party*[numOfParties];

}

bool ElectionRound::addCitizen(char* name,int id,int birth_year,int ballot_box)
{
    numOfElectors+=1;
    if (numOfElectors > sizeOfElectorsArray)
    {
        sizeOfElectorsArray*=2;
        electors = new Citizen*[sizeOfElectorsArray];
    }
    electors[numOfElectors] = new Citizen;

    electors[numOfElectors]->setName(name);
    electors[numOfElectors]->setId(id);
    electors[numOfElectors]->setYearOfBirth(birth_year);
    electors[numOfElectors]->setBallotBox(ballot_box);
    return true;
}

bool ElectionRound::addParty(char* name,int politicalFactions ,int year, int month, int day) {
    numOfParties += 1;
    if (numOfParties > sizeOfPartiesArray) {
        sizeOfPartiesArray *= 2;
        parties = new Party *[sizeOfPartiesArray];
    }

    parties[numOfParties] = new Party;

    //set the new variables
    parties[numOfParties]->setName(name);

    switch (politicalFactions)
    {
        case 1:
            parties[numOfParties]->setPoliticalFactions(Party::politicalFactions::Left);
            break;
        case 2:
            parties[numOfParties]->setPoliticalFactions(Party::politicalFactions::Center);
            break;
        case 3:
            parties[numOfParties]->setPoliticalFactions(Party::politicalFactions::Right);
            break;
    }

    Date* theDate = new Date;
    theDate->setYear(year);
    theDate->setMonth(month);
    theDate->setDay(day);

    parties[numOfParties]->setDate(theDate);
}

