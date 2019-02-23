#include <iostream>
#include<string>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    string niz[100];
    int b=0;
    for(int i=0; i<100; i++)
    {  cin>>niz[i];
       if(niz[i] == "zadnja")break;
       b++;
    }
    std::map<int, string> velicina_rijeci;
    int tz[b];
    for (int i = 0; i < b; i++)
	{
		int tezina = 0;
		tz[i]=0;
		string rijec=niz[i];
		for (int j = 0; j < rijec.size()-1; j++)
		{
			if (rijec[j] != 'a' && rijec[j] != 'e' && rijec[j] != 'i' && rijec[j] != 'o' && rijec[j] != 'u'
				&& rijec[j + 1] != 'a' && rijec[j + 1] != 'e' && rijec[j + 1] != 'i' && rijec[j + 1] != 'o' && rijec[j + 1] != 'u')
				tezina++;
		}
		tz[i] = tezina;
		cout << "Rijec-> " << niz[i] << " je teska -> " << tz[i] << endl;
		velicina_rijeci[tz[i]]=niz[i];
	}
	sort(tz, tz+b);

	cout <<endl<< velicina_rijeci[tz[b-2]];
        return 0;

    }




