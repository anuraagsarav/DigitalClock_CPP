#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main(){

    time_t t = time(NULL);
    tm *timePtr = localtime(&t);
        
    int hrs = (timePtr->tm_hour);
    int min = (timePtr->tm_min);
    int sec = (timePtr->tm_sec);

    int day = (timePtr->tm_mday);
    int month = (timePtr->tm_mon);
    int year = (timePtr->tm_year);


    while(true) 
    {
        system("cls");

        cout << "Date : ";
        cout << day <<"/"<< month <<"/"<< year-100 << endl;

        cout << "Time : ";
        cout << hrs << ":" << min << ":" << sec << endl;

        sec++;

        if(sec >= 60)
        {
            sec = 1;
            min++;
        }
        if(min >= 60)
        {
            min = 0;
            hrs++;
        }
        if(hrs > 12 && hrs <= 24)
        {
            hrs = hrs-12;
        }
        Sleep(1000);
    }
    return 0;
}
