#include <iostream>
#include <cstdlib>
#include <string.h>
#include <algorithm>
#include <ctime>
using namespace std;

int faktorijel(int);
int suma(int[],int);
void piramid(int,int,int,int);
bool binarySearch(int[],int,int,int);

int main()
{
    srand(time(0));

    const int a=5;
    int n[a];

    for(int i=0;i<a;i++)
        n[i] = rand()%9+1;


       /*for(int i =0;i<a-1;i++)
            for(int j=i+1;j<a;j++)
                if(n[i]>n[j]) swap(n[i],n[j]);*/

    sort(n,n+a);


    int broj;

    for(int i=0;i<a;i++)
       cout << n[i] << " | ";
    cout << endl;
       cin >> broj;
       if(!binarySearch(n,0,a-1,broj))
            cout << "Ne postoji"<<endl;

    return 0;
}

bool binarySearch(int n[],int l,int h,int s)
{
    if(l>h)
        return false;

    int m=(l+h)/2;

    if(n[m]==s)
    {
        cout << n[m] <<" at indeks " << m <<endl;
        return true;
    }
    else if(n[m]>s)
        binarySearch(n,l,m-1,s);
    else
        binarySearch(n,m+1,h,s);
}

/*int faktorijel(int n)
{
    if(n==1)
        return 1;

    return n*faktorijel(n-1);

    //5*4*3*2*1
}
*/
/*int suma(int n[],int v)
{
    int t=0;

    if(v<0)
        return 0;


    t+=n[v]+suma(n,v-1);
       cout << t << endl;
    //t+= n[v]+t+t+t+t;

    return t;
}*/

/*void piramid(int pr,int zv,int r,int maxR)
{
    if(r==maxR)
        return;
    for(int i=0;i<pr;i++)
        cout<< " ";
    for(int i=0;i<zv;i++)
        cout<< "+";
    cout << endl;
    piramid(pr-1,zv+2,r+1,maxR);
}*/
