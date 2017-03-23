#ifndef CALENDAR_H
#define CALENDAR_H

class Calendar{
    protected:
        int day, mo, yr;
    public:
        Calendar(int d, int m, int y);
        void setCalendar(int d, int m, int y);
        void readCalendar(int& d, int& m, int& y);
        void advance();

};

#endif // CALENDAR_H
