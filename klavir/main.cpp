#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    char d;
    while(true)
    {
        d=_getch();


        Beep(2*(int)d,100);
    }

//    char m[100]="OVo jen nekasdaj sdua sdabs asda usdu absud hausdbasduasd as";


   /* for(int i=0;strlen(m);i++)
    {
        Sleep(100);
        cout << m[i];
    }*/
    return 0;
}
