#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream ulaz("ulaz.in");
    ofstream izlaz("izlaz.out");
    int N;
    ulaz >> N;

    int niz[N];
    int K,kom;
    ulaz >> K;


    for(int i=0; i<N; i++)
        ulaz >> niz[i];

    for(int i=0;i<K;i++)
    {
        ulaz>>kom;
        bool ima=false;
        for(int j=0;j<N;j++)
        {
            if(kom==niz[j])ima=true;
        }
        if(ima) izlaz << "DA\n";
        else izlaz << "NE\n";
    }




   /* for(int i=0; i<K;i++)
        ulaz >> komandni_niz[i];
    for(int j=0;j<N;j++)
        {
            if(kom==niz[j])ima=true;
        }

    for(int j=0; j<K; j++)
    {
        bool ima=false;
        for(int i=0; i<N;i++)
        {
        if(komandni_niz[j]==niz[i])
            ima=true;

        }
        if(ima)
            izlaz << "DA" << endl;
        else
            izlaz << "NE" << endl;
    }*/
    return 0;
}
