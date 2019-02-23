#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int niz[x];
    for(int i=0;i<x;i++)
        cin>> niz[i];
    for(int i=0;i<x;i++)
        cout << niz[i] << " | ";
        cout << endl << endl;
        bool p;
    p=true;
    while(p)
    {
        p=false;
        for(int i=0;i<x-1;i++)
        {
            if(niz[i]>niz[i+1])
                {   int t=niz[i];
                    niz[i]=niz[i+1];
                    niz[i+1]=t;
                    p=true;
                }
        }
    }
    for(int i=0;i<x;i++)
        cout << niz[i] << " | ";

    return 0;
}
