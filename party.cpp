//
// Created by sdadmin on 20/03/2020.
//

#include "party.h"

void Party::init(){


    theFactions = new politicalFactions;
    theDate = new Date;


    numOfCandidates = 10;
    sizeOfCandidates = 10;
    candidates = new Citizen*[numOfCandidates];
}



//setters

bool Party::setName(char *n)
{
    name = n;
    return true;
}

bool Party::setDate(Date* d)
{
    theDate = d;
    return true;
}

bool Party::setCandidates(Citizen *c)
{
    candidates = c;
    return true;
}

bool Party::setPoliticalFactions(Party::politicalFactions p)
{
    theFactions = p;
    return true;
}

//getters

char * Party::getName()
{
    return name;
}

Date* Party::getDate()
{
    return theDate;
}

Citizen* Party::getCandidates()
{
    return candidates;
}

Party::politicalFactions Party::getPoliticalFactions()
{
    return theFactions;
}










