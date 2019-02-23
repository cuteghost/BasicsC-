#include <iostream>
#include <cmath>

using namespace std;

float genije(float nizic[], int y)
{
    float brojac=0;
    for(int i=0; i<y;i++)
        {
            if(brojac<nizic[i+1]-nizic[i])
            brojac=nizic[i+1]-nizic[i];
        }
        return brojac;

}


int main()
{
    const int x=10;
    float nizic[x];
    for(int i=0; i<x;i++)
        cin >> nizic[i];
    cout << genije(nizic, x);


    return 0;
}
