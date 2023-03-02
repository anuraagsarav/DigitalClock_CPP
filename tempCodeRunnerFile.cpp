#include <iostream>
#include <windows.h>

using namespace std;

int main(){

    int hrs, mins, sec;
    int delay = 1000;

    cout<<"Set Time:"<<endl;
    cin>>hrs>>mins>>sec;

    if(hrs > 12 || mins > 60 || sec > 60){

        cout<<"ERROR!"<<endl;
        exit(0);

    }

    while(true){

        sec++;

        if(sec >= 60){

            mins++;
            sec =0;
        
        }
        if(mins >= 60){

            hrs++;
            mins =0;

        }
        if(hrs > 12){

            hrs = 1;

        }
        cout<<"Time:"<<endl;
        cout<<hrs<<mins<<sec<<endl;
        Sleep(delay);
        system("clr");
    }
    return 0;
}
