//
// Created by sdadmin on 20/03/2020.
//

#include "date.h"


//setters
bool Date::setDay(int d) {

    day = d;
    return true;
}

bool Date::setMonth(int m) {

    month = m;
    return true;

}

bool Date::setYear(int y) {
    year= y;
    return true;

}

//getters

int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear() {
    return year;
}