#include "ClockCalendar.h"


ClockCalendar::ClockCalendar(int day, int month, int year, int hour, int minute, int second, bool pm) : Clock(hour, minute, second, pm),
                                                                                                        Calendar(day, month, year){
}

void ClockCalendar::advance(){
    Clock::advance();
    if(hr == 12 && min == 0 && sec == 0 && is_pm == false){
        Calendar::advance();
    }
}
