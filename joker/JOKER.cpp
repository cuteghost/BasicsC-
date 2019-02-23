#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ifstream ulaz("ulaz.in");
ofstream izlaz("izlaz.out");
void pro (string a, string b)
{
    int x=0;
    for(int i=0; i<6; i++)
        {
            if(a[i]==b[i])
            {
                x++;
            }
            else if(a[i]!=b[i])
            {
                x=0;
            }
        }
    if(x==6)
    izlaz<< "I vrsta\n";

    else if(x==5)
    izlaz << "II vrsta\n";

    else if(x==4)
    izlaz << "III vrsta\n";

    else if(x==3)
    izlaz << "IV vrsta\n";

    else if(x==2)
    izlaz << "V vrsta\n";

    else
    izlaz << "Nedobitan\n";
}

int main()
{
    int izvuceni[6];
    string joker;

    for(int i=0;i<6;i++)
    {
        ulaz >> izvuceni[i];
        if(izvuceni[i]<1&&izvuceni[i]>45)
            return 0;
    }
    for(int i=0;i<6; i++)
    {
        joker+=izvuceni[i]%10 + '0';
    }
    for(int i=0; i<3; i++)
    {
        string serijski;
        ulaz >> serijski;
        pro(serijski,joker);
    }
    return 0;
}
