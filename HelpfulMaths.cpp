#include <iostream>
using namespace std;
int main()
{
    string s;
    char t;
    cin >> s;
    for(int i=0;i<s.length();i+=2)
    {
        for(int j=0;j<s.length();j+=2)
        {
            if(s.at(j)>s.at(i))
            {
                t=s[j];
                s[j]=s[i];
                s[i]=t;
            }
        }
    }
    cout << s;
}