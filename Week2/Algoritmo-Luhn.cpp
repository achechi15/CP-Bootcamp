#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int sum = 0;
    cin >> s;
    for (int i = 0; i < 16; i++)
    {
        if (i % 2 == 0)
        {
            int aux = s[i] - 48;
            aux = aux * 2;
            if (aux > 9)
            {
                aux = aux - 9;
                sum = sum + aux;
            }
            else
            {
                sum += aux;
            }
        }
        else
        {
            int aux = s[i] - 48;
            sum += aux;
        }
    }
    if (sum % 10 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}