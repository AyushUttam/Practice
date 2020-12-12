#include <iostream>
using namespace std;
int main()
{
    int n,m,c;
    cin >> n >> m;
    if(n%2==1&&m%2==1)
    c=((n*m)-1)/2;
    else
    c=(n*m)/2;
    cout << c;
}