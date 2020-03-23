//
// Created by sdadmin on 20/03/2020.
//

#ifndef OOPART1_PARTY_H
#define OOPART1_PARTY_H

#include "citizen.h"
#include "date.h"


class Party {

public:
    enum class politicalFactions {Left, Center, Right};

private:
    char name[20];
    politicalFactions* theFactions;
    Date* theDate;
    int numOfCandidates;
    int sizeOfCandidates;
    Citizen** candidates;

public:

    void init();
    //setters
    bool setName(char* n);
    bool setPoliticalFactions(politicalFactions p);
    bool setDate(Date* d);
    bool setCandidates(Citizen* c);

    //getters
    char* getName();
    politicalFactions getPoliticalFactions();
    Date* getDate();
    Citizen* getCandidates();
};


#endif //OOPART1_PARTY_H
