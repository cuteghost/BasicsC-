#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
using namespace std;
ifstream ulaz("ulaz.in");
ofstream izlaz ("izlaz.out");
float racun(float x[],int B1, int B2, int y)
{
    float razmak;
    razmak=abs(x[y-B1]-x[y-B2]);
    izlaz << razmak;
    return razmak;
}
int main()
{
    float vrijeme[15];
    int x;
    for(int i=0; i<15; i++)
        {
            ulaz >> vrijeme[i];
            if(vrijeme[i]==0)
            {
              i++;
              swap(x,i);
              break;
            }
        }
    int B1, B2;
    ulaz >> B1 >> B2;
    racun(vrijeme,B1,B2,x);
    return 0;
}