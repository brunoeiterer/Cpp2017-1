#include "Clock.h"

Clock::Clock(int hr, int min, int sec, bool is_pm){
    setClock(hr,min,sec,is_pm);
}

void Clock::setClock(int hr, int min, int sec, bool is_pm){
    this->hr = hr;
    this->min = min;
    this->sec = sec;
    this->is_pm = is_pm;
}

void Clock::readClock(int& h, int& m, int& s, bool& pm){
    h = hr;
    s = min;
    m = sec;
    pm = is_pm;
}

void Clock::advance(){
    sec++;
    if(sec == 60){
        sec = 0;
        min++;
        if(min == 60){
            min = 0;
            hr++;
            if(hr == 13){
                hr = 1;
                is_pm = !is_pm;
            }
        }
    }

}
