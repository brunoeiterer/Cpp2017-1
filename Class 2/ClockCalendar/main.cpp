#include <iostream>
#include <windows.h>
#include <iomanip>
#include "Clock.h"
#include "Calendar.h"
#include "ClockCalendar.h"
using namespace std;

int main()
{
    /*
    Clock clock(12, 59, 50, false);
    int hour, minute, second;
    bool pm;
    while(1){
        Sleep(1000);
        clock.advance();
        clock.readClock(hour, minute, second, pm);
        if(pm == true){
            cout << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second << " PM" << endl;
        }
        else{
            cout << hour << ":" << minute << ":" << second << " AM" << endl;
        }
    }
    Calendar calendar(23, 12, 2017);
    while(1){
        int day, month, year;
        Sleep(1000);
        calendar.advance();
        calendar.readCalendar(day, month, year);
        cout << setfill('0') << setw(2) << day << "/" << setfill('0') << setw(2) << month << "/" << setfill('0') << setw(4) << year << endl;
    }
    */
    ClockCalendar clockcalendar(31, 12, 2017, 11, 59, 50, true);
    while(1){
        int second, minute, hour, day, month, year;
        bool pm;
        Sleep(1000);
        clockcalendar.advance();
        clockcalendar.readCalendar(day, month, year);
        clockcalendar.readClock(hour, minute, second, pm);
        cout << setfill('0') << setw(2) << day << "/" << setfill('0') << setw(2) << month << "/" << setfill('0') << setw(4) << year << " ";
        if(pm == true){
            cout << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second << " PM" << endl;
        }
        else{
            cout << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second << " AM" << endl;
        }
    }
    return 0;
}
