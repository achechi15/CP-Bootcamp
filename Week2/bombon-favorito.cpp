#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, c;
        bool validator = false;
        cin >> n >> c;
        for (int j = 0; j < n; j++)
        {
            int aux;
            cin >> aux;
            if (aux == c){validator = true;}
        }
        if (validator) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}