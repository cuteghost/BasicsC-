#include <iostream>

using namespace std;

bool composite2(int n)
{

    for(int i=2; i<n;i++)
        if(n%i==0)
            return true;


        return false;

}
bool prost(int x)
{
    for(int i=2; i<x;i++)
        if(x%i==0)
            return false;
        return true;
}
int main()
{
    int p;
    cin >> p;
    if(composite2(p)==true)
    {
        cout << "its composite";
    }
    else
    {
         cout << "its not";
    }
    for(int i=1; i<=100; i++)
        if(prost(i)==true)
                cout << i << "  ";

    return 0;
}
