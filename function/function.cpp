#include <iostream>

using namespace std;
int function_N(int n)
{
    int vratit=0;
    for(int i=1; i<=n; i++)
        if(n%i==0)
            {
             vratit*=10;
             vratit+=i;
            }
        return vratit;


}

int main()
{
    int m;
    int p;
    cin >> m;
    p=function_N(m);
    cout << p << endl;
    return 0;
}
