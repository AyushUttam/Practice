#include <iostream>
using namespace std;
int main()
{
    int n,c;
    string s;
    cin >> n >> s;
    c=0;
    for(int i=0;i<n-1;i++)
        if(s[i]==s[i+1])
            c++;
    cout << c;
}