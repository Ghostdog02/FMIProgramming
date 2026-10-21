#include <iostream>

using namespace std;

int main()
{
    int k = 0;
    int year = 0;
    int month = 0;
    int day = 0;
    int daysInMonth = 0;

    cin >> day >> month >> year >> k;

    while (k > 0)
    {
        if (month == 2)
        {
            daysInMonth = 28;

            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                daysInMonth++;
            }
        }

        else if ((month <= 7 && month % 2 != 0) || (month > 7 && month % 2 == 0))
        {
            daysInMonth = 31;
        }

        else
        {
            daysInMonth = 30;
        }
        
        if ((k + day) > daysInMonth)
        {
            k -= (daysInMonth + 1) - day;
            day = 1;
            month++;
        }

        else
        {
            day = k + day;
            k = 0;
        }

        if (month > 12)
        {
            month = 1;
            year++;
        }
    }

    if (day < 10)
    {
        cout << "0";
    }
    
    cout << day << ".";

    if (month < 10)
    {
        cout << "0";
    }

    cout << month << "." << year << endl;
    return 0;
}