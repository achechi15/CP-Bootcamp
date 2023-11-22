#include <bits/stdc++.h>

using namespace std;
int main()
{
    int p, v, awake = 0;
    cin >> p >> v;
    char arr1[p][v*2];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < v*2; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < v*2; j++)
        {
            if (j % 2 == 0)
            {
                if (arr1[i][j] == '#' || arr1[i][j+1] == '#')
                {
                    awake++;
                }
            }
        }
    }
    cout << awake << endl;
    return 0;
}