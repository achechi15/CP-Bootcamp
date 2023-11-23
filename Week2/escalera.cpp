#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    while(cin >> m)
    {
        if (m > n)
        {
            cout << "S";
        }
        else if (m < n)
        {
            cout << "B";
        }
        else if (m == n)
        {
            cout << "I";
        }
        n = m;
    }
    cout << endl;
    return 0;
}