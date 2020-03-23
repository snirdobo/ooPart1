//
// Created by sdadmin on 20/03/2020.
//

#include "citizen.h"

//setters
bool Citizen::setName(char *n)
{
    name = n;
    return true;
}

bool Citizen::setId(int i)
{
    id = i;
    return true;
}

bool Citizen::setYearOfBirth(int y)
{
    birth_year = y;
    return true;
}

bool Citizen::setBallotBox(int b)
{
    ballot_box = b;
    return true;
}

//getters
char * Citizen::getName()
{
    return name;
}

int Citizen::getId()
{
    return id;
}

int Citizen::getYearOfBirth()
{
    return birth_year;
}

int Citizen::getBallotBox()
{
    return ballot_box;
}






