#include <iostream>

using namespace std;

char endl(char );

void funkcija(int n, int& even, int& odd)
{
    int cifra;
    while(n!=0)
    {
        cifra=n%10;
       if(cifra%2==0)
        even++;
       else
        odd++;
       n/=10;

    }
}

int main()
{
int p, brojparnih=0, brojneparnih=0;
cin >> p ;
funkcija(p, brojparnih, brojneparnih);
cout << "moj broj ima " << brojparnih << " parnih i " << brojneparnih << " neparnih" << endl;
}
