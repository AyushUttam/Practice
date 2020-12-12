#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin >> n;
    d=0;
    for(int i=1;i<=n;i++)
    {
        cin >> a >> b >> c;
        if((a==1&&b==1)||(b==1&&c==1)||(c==1&&a==1))
        d++;
    }
    cout << d;
}