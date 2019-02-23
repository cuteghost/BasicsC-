#include <iostream>

using namespace std;
int pozivPoVrijednosti(int);
int pozivPoRefernci(int&);

int main()
{
    int broj;
    cin >> broj;

    cout << "Broj " << broj << endl;
    cout <<"Adresa u memoriji " << &broj << endl;

    cout << pozivPoVrijednosti(broj) << endl;
    cout << "Broj " << broj << endl;

    cout << pozivPoRefernci(broj) << endl;
     cout << "Broj " << broj << endl;



    return 0;
}
int pozivPoVrijednosti(int broj)
{
        broj=10;
        return broj;
}
int pozivPoRefernci(int& broj)
{
    broj=15;
    return broj;
}
