#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream ulaz("ulaz.in");
ofstream izlaz("izlaz.out");

int niz(int* p, int x)
{
    for(int i=0; i<x; i++)
        ulaz >> p[i];
    return 0;
}
int sortiranje(int *p, int x)
{
    bool y=true;
    while (y)
    {
        y=false;
        for(int i= 0; i<x-1;i++)
        {
            if(p[i]>p[i+1])
            {
                int provjera=p[i];
                p[i]=p[i+1];
                p[i+1]=provjera;
                y=true;
            }
        }
    }
   int zbir_sudija=p[1]+p[2]+p[3];
   return zbir_sudija;
}
int main()
{
    int K;
    ulaz >> K;
    int D;
    ulaz >> D;
    int bodovi=60;
    int *pointing;
    pointing=new int[5];
    niz(pointing, 5);
    bodovi+=sortiranje(pointing, 5)+(D-K)*2;
    izlaz << bodovi;
    delete[]pointing;
    return 0;

}
