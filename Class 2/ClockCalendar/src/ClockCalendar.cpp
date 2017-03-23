#include "ClockCalendar.h"


ClockCalendar::ClockCalendar(int day, int month, int year, int hour, int minute, int second, bool pm) : Clock(hour, minute, second, pm),
                                                                                                        Calendar(day, month, year){
//    setCalendar(day, month, year);
//    setClock(hour, minute, second, pm);
}
