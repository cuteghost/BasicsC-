#include <iostream>
#include <cstdio>
#include <cstdlib>
#define MAXN 2005
#include <fstream>

using namespace std;
ifstream ulaz("ul.in");
ofstream izlaz("iz.in");
char res[MAXN][MAXN]; //kasnije ce biti dinamicka alokacija

void crtati(int x,int y,int duzina)
{
  if(duzina>3)
  {
    int bazniX = x + 2, bazniY = y + 2;
    int l = (duzina - 2) / 2;
    crtati(bazniX,bazniY,l);
    crtati(bazniX,bazniY+l-1,l);
    crtati(bazniX+l-1,bazniY,l);
    crtati(bazniX+l-1,bazniY+l-1,l);

  }
  for(int i=x;i<x+duzina;i++)
    res[i][y] = res[i][y+duzina-1] = '|';
  for(int i=y;i<y+duzina;i++)
    res[x][i] = res[x+duzina-1][i] = '-';
  res[x][y] = res[x][y+duzina-1] = res[x+duzina-1][y] = res[x+duzina-1][y+duzina-1] = '+';
}

bool ok(int broj)
{
  int temp = 7;
  while(temp<broj)
    temp = 2 * temp + 5;
  if(temp==broj)return true;
  else return false;
}

int main()
{
  //freopen("output.txt","w",stdout);
  int n; ulaz >> n;
  if(!ok(n)) //samo provjeri jel sve ok
  {
    izlaz << "GRESKA" << endl;
    return 0; //terminiraj samo
  }
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      res[i][j] = '.'; //stavi tackice prvo

  crtati(1,1,n/2);
  crtati(1,n/2,n/2);
  crtati(n/2,1,n/2);
  crtati(n/2,n/2,n/2);

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
      izlaz << res[i][j] << " ";
    izlaz<< endl;
  }

  return 0;
}
