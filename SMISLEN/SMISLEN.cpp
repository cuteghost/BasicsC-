#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
bool kraj(string ,int);
int broj_rijeci(string s)
{
    int brojac=0;
    for(int i=0; i<s.size();i++)
    {
     if(s[i]!=' ')
     {
         brojac++;
         while(s[i]!=' ')
            i++;
     }
    }
    return brojac;
}
int main()
{
    string recenica;
    getline(cin, recenica);
    cout << broj_rijeci(recenica);
    return 0;
}

bool kraj(string  s,int i)
{
    for(int j=i;j<s.size();j++)
    {
        if(s[i] == '\0')
            return true;
        else if(s[i] == ' ')
            continue;
        else
            return false;
    }
}
