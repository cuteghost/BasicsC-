#include <iostream>

using namespace std;

void tabela(int x)
{
    int xb=0;
    cout << "+";
    while(xb<x+2)
    {
        cout << "-";
        xb++;
    }

}
void brojevi()
int broji(int w)
{
    int brojac=0;
    for(int i=100000; i>=1; i/=10)
    {
        if(w/i>1)
            brojac++;
    }
    return brojac;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if(a>=b||a<=1||b>100)
        return 0;
    int k=b*b;
    int q=b*b*b;
    int bb=broji(b);
    int bk=broji(k);
    int bq=broji(q);
    int velicina1=bb+3;
    int velicina2=bk+3;
    int velicina3=bq+3;
    for(int i=a; i<=b; i++)
    {
        tabela(bb);
        tabela(bk);
        tabela(bq);
        cout << "+";
        for(int j=0; j<)
    }



    return 0;
}
