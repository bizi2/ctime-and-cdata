#include"main.h"
#include <iostream>


int main() {
    cout << "TIME:";
    Time time1(14, 12, 35), time2;

    cout << " " << time2.assign(time1) << endl;
    cout << time1.output() << endl;
    cout << time1.addHours(20) << endl;
    cout << time1.addMinutes(10) << endl;
    cout << time1.addSeconds(5) << endl;
    cout << time1.output() << endl;
    cout << time1.convert() << endl;
    cout << time1.output() << endl;
    cout << time1.compare(time2) << endl;


    Date date1(14, 12, 2022), date2;
    cout << "DATE: ";
    cout << date2.assign(date1) << endl;
    cout << date1.output() << endl;
    cout << date1.addDays(20) << endl;
    cout << date1.output() << endl;
    cout << date1.compare(date2) << endl;
    cout << date1.addDays(-10) << endl;
    cout << date1.output() << endl;

    return 0;
}