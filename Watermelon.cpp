#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s="NO";
    for(int i=2;i<=n/2;i+=2)
    {
        if((n-i)%2==0)
        {
            s="YES";
            break;
        }
    }
    cout << s;
    return 0;
}