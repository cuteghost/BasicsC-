#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    ifstream ulaz("ulaz.in");
    ofstream izlaz("izlaz.out");
    int R, S; ulaz >> R >> S; if((R||S) < 1 || (R||S) > 100)return 0;//kreiranje dimenzija polja i provjera da li su dimenzije ispravne

    char mapa[R][S];//kreiranje mape
    for(int i=0; i<R; i++)
        for(int j=0; j<S; j++)
            ulaz >> mapa[i][j];

    for(int i=0; i<R; i++) //samo radi provjere da li je mapa unesena kako treba u memoriju
        {
            for(int j=0; j<S; j++)
                {
                    izlaz << mapa[i][j];
                }
            izlaz << "\n";
        }
    int lijevan=0;
    int desnan=0;
    int dolen=0;
    int goren=0;
    int TOR[R][4];
    for(int i=0; i<R; i++)
        {
            lijevan=0;desnan=0;goren=0;dolen=0;
            for(int j=0; j<S; j++)
                {
                    int kljuc=0; int temp=0; kljuc=i; temp=j;//vraca vrijednosti
                    if(mapa[kljuc][temp]=='T')
                    {
                        if(kljuc==0)//izvrsit ce se samo kad je Toranj u prvom redu
                        {
                            while(kljuc<R)
                            {
                                if(mapa[kljuc][temp]=='n')
                                {
                                    if(mapa[kljuc][temp]=='#')
                                        break;
                                    dolen++;
                                }
                                kljuc++;
                            }
                            kljuc=0;
                        }

                        else if(kljuc!=0)
                        {
                            while(kljuc>=0)
                            {
                                if(mapa[kljuc][temp]=='n')
                                    {
                                        goren++;
                                    }
                                kljuc--;
                            }
                        kljuc=i;
                        while(kljuc<R)
                        {
                            if(mapa[kljuc][temp]=='n')
                                {
                                    dolen++;
                                }
                            kljuc++;
                        }
                        kljuc=i;
                        }
                    kljuc=i;
                    temp=0;
                    while(temp<S)
                    {
                        if(mapa[kljuc][temp]=='n')
                                {
                                    lijevan++;
                                }
                        temp++;
                        if(mapa[kljuc][temp]=='T'&&mapa[kljuc][temp-1]=='T')
                            {
                                lijevan=1;
                                break;
                            }
                            if(mapa[kljuc][temp]=='T'&&mapa[kljuc][temp+1])
                                {
                                    desnan=1;
                                    break;
                                }
                                if(mapa[kljuc][temp]=='n')
                                {
                                    desnan++;
                                }

                                temp++;

                    }


                }

        }
            for(int k=0;k<4;k++)
            {
              TOR[i][k]=lijevan;//,desnan,dolen,goren};
              TOR[i][1]=desnan;
              TOR[i][2]=goren;
              TOR[i][3]=dolen;

            }

            izlaz << lijevan << "||" << desnan << "||" << dolen<< "||" << goren <<endl;

        }
        for(int k=0;k<R;k++)
            {
              for(int j=0; j<4; j++)
                cout << TOR[k][j];
              cout << endl;
            }
        return 0;
}



