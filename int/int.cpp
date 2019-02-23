#include <iostream>

using namespace std;
int dosada(int niz[5][5])
{
    int suma=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5;j++)
            if(i<j)
                suma+=niz[i][j];
    }
    return suma;
}
int main()
{
    int niz[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5;j++)
            cin >> niz[i][j];
    }
    cout << dosada(niz) << endl;
    return 0;

}
