//
// Created by sdadmin on 20/03/2020.
//

#ifndef OOPART1_CITIZEN_H
#define OOPART1_CITIZEN_H


class Citizen {

private:

    char name[20];
    int id;
    int birth_year;
    int ballot_box;


public:

    //setters
    bool setName(char* n);
    bool setId(int i);
    bool setYearOfBirth(int y);
    bool setBallotBox(int b);

    //getters
    char* getName();
    int getId();
    int getYearOfBirth();
    int getBallotBox();
};


#endif //OOPART1_CITIZEN_H
