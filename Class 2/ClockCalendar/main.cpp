#include <iostream>
#include <windows.h>
#include <iomanip>
#include "Clock.h"
#include "Calendar.h"
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
    */

    Calendar calendar(23, 03, 2017);
    int day, month, year;
    calendar.readCalendar(day, month, year);
    cout << setfill('0') << setw(2) << day << "/" << setfill('0') << setw(2) << month << "/" << setfill('0') << setw(4) << year;

    return 0;
}
