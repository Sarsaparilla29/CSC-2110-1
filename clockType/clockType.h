#pragma once

class clockType {
    private:
        int hr;
        int min;
        int sec;
    public:
        void setTime(int hours, int minutes, int seconds);
        void printTime();
        clockType();
        clockType(int hours, int minutes, int seconds);

};