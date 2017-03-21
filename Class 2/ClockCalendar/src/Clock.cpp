#include "Clock.h"

Clock::Clock( int hr,  int min, int sec, bool is_pm){
    setClock(hr,min,sec,is_pm);
}

Clock::setClock( int hr,  int min, int sec, bool is_pm){
    this->hr = hr;
    this->min = min;
    this->sec = sec;
    this->is_pm = is_pm;
}

Clock::readClock(int& h, int& s, int& m, bool& pm){
    cout << this->hr << ":" << this->min << ":" << this->sec << this->is_pm ? "pm" : "am" << endl;
}

Clock::advance(){

}
