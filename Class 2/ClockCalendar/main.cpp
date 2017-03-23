#include <iostream>
#include "Clock.h"
using namespace std;

int main()
{
    Clock clock(10, 20, 30, false);
    int hour, minute, second;
    bool pm;
    clock.readClock(hour, minute, second, pm);
    if(pm == true){
        cout << hour << ":" << minute << ":" << second << " PM" << endl;
    }
    else{
        cout << hour << ":" << minute << ":" << second << " AM" << endl;
    }
    return 0;
}
