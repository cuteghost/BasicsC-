#include <iostream>
#include <string>
#include <cstring>

using namespace std;
string podaci[100000];

int main()
{
    int N;
    cin >> N;
    if(N<1||N>100000)
        return 0;
    string niz;
    cin >> niz;

    char k;
    int brojac=0;


    for(int i=0; i<N; i++)
    {
        brojac++;
        int d=i;
        k=niz[i];
        if(isspace(k))
        {
          niz=niz
        }
    }

    int Z=0;
    string cijeli[brojac];
    for(int i=0; i<brojac; i++)
    {
        bool tacnosti=false;
        string nizic=podaci[i];
        for (int j = 0; j < podaci[i].size()-1; j++)
        {
            if(nizic[j]!='0'&&nizic[j]!='1'&&nizic[j]!='2'&&nizic[j]!='3'&&nizic[j]!='4'&&nizic[j]!='5'
               &&nizic[j]!='6'&&nizic[j]!='7'&&nizic[j]!='8'&&nizic[j]!='9')
               {
                   nizic.clear();
                   break;
               }

            else
                tacnosti=true;
                cijeli[i]=nizic[j];
        }
        if(tacnosti==true)
        {
            cijeli[i]=nizic;
            Z++;
        }
    }

    for(int i=0;i<Z;i++)
    {
        cout << cijeli[i] << endl;
    }

    return 0;
}
