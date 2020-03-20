//
// Created by sdadmin on 20/03/2020.
//

#ifndef OOPART1_PARTY_H
#define OOPART1_PARTY_H

#include "citizen.h"
#include "date.h"


class party {

public:
    enum class politicalFactions {Left, Center, Right};

private:
    char name[20];
    politicalFactions theFactions;
    date theDate;
    citizen* candidates;
};


#endif //OOPART1_PARTY_H
