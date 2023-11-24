#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    char drawing[n][m];
    // input of the drawing
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> drawing[i][j];
        }
    }
    
    // check if there's # in drawing[i] and drawing [i+1]
    bool flag = false;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            if (drawing[i][j] == '#' && drawing[i + 1][j] == '#')
            {
                if (drawing[i][j+1] == '#' && drawing[i+1][j+1] == '#')
                {
                    flag = 1;
                }
            }
        }
    }
    if (flag)
    {
        cout << "NO ORIGINAL" << endl;
    }
    else
    {
        cout << "ORIGINAL" << endl;
    }
    return 0;
}