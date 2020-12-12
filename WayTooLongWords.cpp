#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s="";
    for(int i=1;i<=n;i++)
    {
        cin >> s;
        if(s.length()<=10)
        cout << s << "\n";
        else
        {
            cout << s.at(0) << s.length()-2 << s.at(s.length()-1) << "\n";
        }
    }
    return 0;
}