#include <iostream>
#include <windows.h>
#include <iomanip>
#include "Clock.h"
using namespace std;

int main()
{
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

    return 0;
}
