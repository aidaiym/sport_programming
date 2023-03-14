#include <iostream>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

int daysBetween(Date date1, Date date2) {
    int days = 0;
    int days1 = date1.day + (date1.month - 1) * 30 + (date1.year - 1) * 365;
    int days2 = date2.day + (date2.month - 1) * 30 + (date2.year - 1) * 365;
    days = abs(days1 - days2);
    return days;
}

int main() {
    Date date1 = {2002, 11, 17};
    Date date2 = {2023, 1, 1};
    int numDays = daysBetween(date1, date2);
    cout << "The number of days between " << date1.year << "/" << date1.month << "/" << date1.day << " and " << date2.year << "/" << date2.month << "/" << date2.day << " is " << numDays << " days." << endl;
    return 0;
}
