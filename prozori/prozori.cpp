#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream in("ulaz.txt");
	int h, w, p;
	int x, y;
	bool nacrtan;
	bool moze;
	in >> h >> w >> p;

	char **zid = new char*[h];
	for (int i = 0; i < h; i++)
		zid[i] = new char[w];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			zid[i][j] = '.';
		
	while (!in.eof())
	{
		in >> x >> y;
		cout << x << y << endl;
		nacrtan = false;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (zid[i][j] == '.')
				{
					moze = true;

					if (i + x-1 >= h || j + y-1 >= w)
						moze = false;

					if (moze) {
						for (int r = i; r < i + x; r++)
						{
							for (int k = j; k <j+y ; k++)
							{
								if (zid[r][k] != '.')
									moze = false;
							}
							if (!moze)
								break;
						}
					}
					
					if(moze)
					{
						for (int r = i; r < i+x; r++)
						{
							for (int k = j; k < j+y; k++)
							{
								if (r == i || r == i + x - 1)
									zid[r][k] = '-';
								else if (k == j || k == j + y - 1)
									zid[r][k] = '|';
								else
									zid[r][k] = '#';
							}
						}
						zid[i][j] = zid[i][j + y - 1] = '+';
						zid[i + x - 1][j] = zid[i + x - 1][j + y - 1] = '+';
						
						nacrtan = true;
						break;
					}
					
				}
			}
			if (nacrtan)
				break;
		}

	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			cout << zid[i][j];

		cout << endl;
	}
	for (int i = 0; i < h; i++)
	{
		delete[]zid[i]; zid[i] = NULL;
	}
	
	delete[] zid; zid = NULL;


	return 0;
}