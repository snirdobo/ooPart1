//
// Created by sdadmin on 21/03/2020.
//

#ifndef OOPART1_ELECTIONROUND_H
#define OOPART1_ELECTIONROUND_H

#include "citizen.h"
#include "party.h"
#include "date.h"

class ElectionRound {
private:
    int month;
    int year;

    int numOfElectors;
    int sizeOfElectorsArray;
    Citizen** electors;

    int numOfParties;
    int sizeOfPartiesArray;
    Party** parties;

public:

    void init();
    bool addCitizen(char* name,int id,int birth_year,int ballot_box);
    bool addParty(char* name,int politicalFactions ,int year, int month, int day);
    bool addCitizenToParty(int party,int partyLocation);
};


#endif //OOPART1_ELECTIONROUND_H
