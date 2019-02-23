#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>

using namespace std;
void tor(char x[][], int s,int r);

int main()
{
    ifstream ulaz("ulaz.in");
    ofstream izlaz("izlaz.out");
    int R, S; ulaz >> R >> S; if((R||S) < 1 || (R||S) > 100)return 0;//kreiranje dimenzija polja i provjera da li su dimenzije ispravne

    char mapa[R][S];//kreiranje mape
    for(int i=0; i<R; i++)
        for(int j=0; j<S; j++)
            ulaz >> mapa[i][j];

    tor(R,S,mapa);



        return 0;
}
void tor(int r,int s,char x[][s])
{
    char jedan='1';// dolje lijevo
    char dva='2';// dolje desno
    char tri='3';// gore desno
    char cetiri='4';// gore lijevo
    for(int i=0; i<r; i++)
    {
        int h=0;
        h=i;
        for(int j=0; j<s; j++)
        {
            int w=0;
            if(x[i][j]=='T')
            {
                w=j;
                while(x[i][w]!='T'&&w<s)
                {
                    w++;
                    int brojac=0;
                    brojac++;
                    if(x[i][w]=='T')
                    {
                        w-=brojac;
                        while(x[h][w]&&h<r)
                        {
                            if(h==0)
                            {
                                h++;
                                if(x[h][j]=='T')
                                    swap(x[h][j],jedan)
                            }
                        }
                    }

            }
        }
    }
}
}



