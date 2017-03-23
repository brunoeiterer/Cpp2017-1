#include "Calendar.h"

Calendar::Calendar(int d, int m, int y){
    setCalendar(d, m, y);
}

void Calendar::setCalendar(int d, int m, int y){
    day = d;
    mo = m;
    yr = y;
}

void Calendar::readCalendar(int& d, int& m, int& y){
    d = day;
    m = mo;
    y = yr;
}

void Calendar::advance(){

}
