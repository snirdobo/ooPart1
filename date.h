//
// Created by sdadmin on 20/03/2020.
//

#ifndef OOPART1_DATE_H
#define OOPART1_DATE_H


class Date {

private:
    int day;
    int month;
    int year;

public:

    //setters
    bool setDay(int d);
    bool setMonth(int m);
    bool setYear(int y);

    //getters
    int getDay();
    int getMonth();
    int getYear();
};



#endif //OOPART1_DATE_H
