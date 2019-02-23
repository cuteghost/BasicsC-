#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
char niz[1000000];
int main(int argc, char *argv[])
{
freopen ( "vocnjak.in", "r", stdin );//aa
freopen ( "vocnjak.out", "w", stdout );//aa
int n, brs = 0, broj=0, p, max = 0, izlaz;
scanf("%d", &n);
memset(niz, 0, sizeof(niz));
scanf("%s", &niz);
brs = 0;
for(int i = 0; i < n; i++)
{
if(niz[i] == 'K')
{
brs = brs + 1;
}
}
for(int i = 0; i < n; i++)
{
broj = 0;
p = i;
for(int k = 0; k < brs; k++)
{
if(p == n)
{
p = 0;
}
if(niz[p] == 'K')
broj++;
p++;
}
if(broj >= max)
max = broj;
}
izlaz = brs - max;
printf("%d\n", izlaz);
fclose(stdout) ;
}
