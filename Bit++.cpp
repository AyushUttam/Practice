#include <iostream>
using namespace std;
int main()
{
    int n,c;
    cin >> n;
    c=0;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin >> s;
        if(s=="++X"||s=="X++")
        c++;
        if(s=="--X"||s=="X--")
        c--;
    }
    cout << c;
}