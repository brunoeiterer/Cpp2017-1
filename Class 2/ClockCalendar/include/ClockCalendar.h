#ifndef CLOCKCALENDAR_H
#define CLOCKCALENDAR_H

#include "Clock.h"
#include "Calendar.h"


class ClockCalendar: public Clock, public Calendar{
    public:
        ClockCalendar(int day, int month, int year, int hour, int minute, int second, bool pm);
        void advance();

};


#endif // CLOCKCALENDAR_H
