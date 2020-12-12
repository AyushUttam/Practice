#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,n;
    n=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin >> n;
            if(n==1)
            {
                a=i;b=j;
                n=-1;
                break;
            }
        }
        if(n==-1)
        break;
    }
    n=abs(a-2)+abs(b-2);
    cout << n;
}