#include <iostream>
using namespace std;
int main()
{
    int x,c;
    cin >> x;
    c=0;
    if(x>=5)
    {
        c=x/5;
        x=x%5;
    }
    if(x>0)
    c++;
    cout << c;
    return 0;
}