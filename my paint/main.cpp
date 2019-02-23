#include <iostream>
#include<cstdlib>
#include <fstream>
using namespace std;



int main()
{

    ifstream ucitaj;
    ucitaj.open("ulaz.in");

    int m,n;

    ucitaj >> m ;
    ucitaj >> n;

    int mat_[m][m];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            mat_[i][j] ='.';
        }
    }



    for(int k = 0 ; k < n; k++)
    {
        int r1,k1,r2,k2;

        ucitaj >> r1 >>  k1   >>  r2   >>  k2;

        for(int i = r1-1;i<r2;i++)
        {
            for(int j=k1-1;j<k2;j++)
            {
                if(mat_[i][j]=='.')
                    {mat_[i][j]='*';}
                else if(mat_[i][j]=='*')
                    {mat_[i][j] ='.';}
            }
        }
    }

    ucitaj.close();
    ofstream upis("izlaz.out");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
          upis <<   mat_[i][j] << " ";
        }
        upis <<endl<<endl;
    }
    upis.close();
    return 0;
}



