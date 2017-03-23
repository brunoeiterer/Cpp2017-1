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
    day++;
    if(mo == 1 || mo == 3 || mo == 5 || mo == 7 || mo == 8 || mo == 10 || mo == 12){
        if(day == 32){
            day = 1;
            mo++;
        }
        if(mo == 13){
            mo = 1;
            yr++;
        }
    }
    else if(mo == 4 || mo == 6 || mo == 9 || mo == 11){
        if(day == 31){
            day = 1;
            mo++;
        }
    }
    else{
        if(day == 29){
            day = 1;
            mo++;
        }
    }
}
