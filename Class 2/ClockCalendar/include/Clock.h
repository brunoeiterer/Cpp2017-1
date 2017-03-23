#ifndef CLOCK_H
#define CLOCK_H

class Clock
{
    protected:
        int hr;
        int min;
        int sec;
        bool is_pm;

    public:
        Clock( int hr,  int min,  int sec, bool is_pm);
        void setClock(int h, int s, int m, bool pm);
        void readClock(int& h, int& s, int& m, bool& pm);
        void advance();
};

#endif // CLOCK_H
