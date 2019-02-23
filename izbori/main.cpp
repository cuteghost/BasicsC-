#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n, m, redni;
    cin >> n >> m;
    int glasovi[n], p[n];
    int zbroj=0;

    map<int, int, int> rezultati;

    for(int i=0; i<n; i++)
    {
        cin >> g[i];
        zbroj+=g[i];
        p[i]=g[i];
    }
    int pref=(zbroj/100)*10;
    int prolaz[n];
    for(int i=0; i<n; i++)
    {
        if(g[i]<pref)
            prolaz[i]=g[i];
        else if(g[i]>g[i+1])

    }

    return 0;
}
