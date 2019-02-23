#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ifstream ulaz("ulaz.in");
    ofstream izlaz("izlaz.out");
    int bodovi=60; //zbir bodova
    int K;
    ulaz >> K;
    if(K!=90 || K!=120)
        return 0;
    int D;
    ulaz >> D;

    int ocjena[5];
    for(int i=0; i<5; i++)
        ulaz >> ocjena[i];

    sort(ocjena, ocjena+5);
    bodovi+= ocjena[1]+ocjena[2]+ocjena[3]+2*(D-K);
    izlaz<< bodovi;
    return 0;
}
