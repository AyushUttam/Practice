#include <iostream>
using namespace std;
int main()
{
    int n,k,w,c;
    cin >> k >> n >> w;
    c=(w*(w+1))/2;
    c=c*k;
    w=0;
    if(n>=c)
    cout << w;
    else
    cout << (c-n);
}