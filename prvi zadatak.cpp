#include <iostream>

using namespace std;

int main()
{
    int H, W;
    cout << "Unesite visinu i sirinu paralelograma \n";
P:  cin >> H >> W;
    if((H<=3&&H>=20)||(W<=3&&W>=60))
     {
        cout <<"unesite ispravne brojeve tako da figura moze stati na ekran \n prvi broj ne bi trebao biti manji od 3 a veci od 20 \n a drugi broj manji od 3 a veci od 60";
    goto P;
     }
     for(int i = 0; i<H; i++)
     {
         for(int j=0; j<W ; j++)
          {
              if(i==0)
                cout<<"*";
                else if(j+1!=i && j==W)
                    cout << "* ";
              else if(j==i)
                cout<<"*";
              else
                cout<<" ";
          }
           for (int j=W;j<W+H; j++)
          {
              if(i==H)
                cout<<"*";
              else if(j==i+H)
                        cout<<"*";
              else
                cout<< " ";

          }

         cout <<endl;
     }


     return 0;
}


