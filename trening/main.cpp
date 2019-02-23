#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>
using namespace std;
void vrijeme(char a[][3]);
ofstream izlaz("izlaz.out");

int main()
{
    ifstream ulaz("ulaz.in");
    char jedan [5][3];
    char dva [5][3];
    char tri [5][3];
    char cetri [5][3];
for (int i = 0; i<5; i++)
    {
        for (int j=0; j<3; j++)
        {
            ulaz >> jedan [i][j];
        }
        for (int j=0; j<3; j++)
        {
            ulaz >> dva [i][j];
        }
        for (int j=0; j<3; j++)
        {
            ulaz >> tri [i][j];
        }
        for (int j=0; j<3; j++)
        {
            ulaz >> cetri [i][j];
        }
    }


    vrijeme(jedan);
    vrijeme(dva);
    izlaz << ":" ;
    vrijeme(tri);
    vrijeme (cetri);
    return 0;
}


void vrijeme(char a[][3])
{
    char time;
    if (a[1][1]=='.' && a[3][1]=='.')
    {
        // broj 1
        if(a[0][0] == '.' && a[2][0] == '.' && a[2][1] == '.' && a[4][0] == '.')
        {
            time = '1';
            izlaz << time;

        }
        else if(a[1][0] == '.' && a[1][1] == '.' && a[3][1] == '.' && a[3][2] == '.')
        {
            time = '2';
            izlaz << time;

        }
        else if(a[1][0] == '.' && a[1][1] == '.' && a[3][0] == '.' && a[3][1] == '.')
        {
            time = '3';
            izlaz << time;

        }
        else if(a[0][1] == '.' && a[1][1] == '.' && a[3][0] == '.' && a[4][0] == '.')
        {
            time = '4';
            izlaz << time;

        }
        else if(a[1][1] == '.' && a[1][2] == '.')
        {
            time = '5';
            izlaz << time;

        }
        else if(a[1][2]== '.')
        {
            time = '6';
            izlaz << time;

        }
        else if(a[1][0]=='.' && a[2][0]=='.' && a[4][0]=='.' && a[4][1]=='.')
        {

            time = '7';
            izlaz << time;

        }
        else if(a[2][0]=='.' && a[2][2]=='.' && a[3][0]=='.' && a[3][2]=='.')
        {

            time = '8';
            izlaz << time;

        }
        else if(a[3][0]=='.')
        {

            time = '9';
            izlaz << time;

        }
        else if(a[3][1]=='.')
        {

            time = '0';
            izlaz << time;

        }
    }

}
