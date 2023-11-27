#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >>n >> m;
    char mine[n][m];
    // Input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mine[i][j];
            if (mine[i][j] == '.')
            {
                mine[i][j] =' ';
            }
            else if (mine[i][j] == '*')
            {
                mine[i][j] = 'F';
            }
        }
    }
    // check if there is a mine
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if  (mine[i][j] == 'F')
            {
                // Right of the mine
                if (mine[i+1][j] == '1')
                {
                    mine[i+1][j] += 1;
                }
                else
                {
                    mine[i+1][j] = '1';
                }
                // Down of the mine
                if (mine[i][j+1] == '1')
                {
                    mine[i][j+1] += 1;
                }
                else
                {
                    mine[i][j+1] = '1';
                }
                // Left of the mine
                if (mine[i-1][j] == '1')
                {
                    mine[i-1][j] += 1;
                }
                else
                {
                    mine[i-1][j] = '1';
                }
                // Up of the mine
                if (mine[i][j-1] == '1')
                {
                    mine[i][j-1] += 1;
                }
                else
                {
                    mine[i][j-1] = '1';
                }
                // down and right of the mine
                if (mine[i+1][j+1] == '1')
                {
                    mine[i+1][j+1] += 1;
                }
                else
                {
                    mine[i+1][j+1] = '1';
                }
                // up and right of the mine
                if (mine[i+1][j-1] == '1')
                {
                    mine[i+1][j-1] += 1;
                }
                else
                {
                    mine[i+1][j-1] = '1';
                }
                // down and left of the mine
                if (mine[i-1][j+1] == '1')
                {
                    mine[i-1][j+1] += 1;
                }
                else
                {
                    mine[i-1][j+1] = '1';
                }
                // up and left of the mine
                if (mine[i-1][j-1] == '1')
                {
                    mine[i-1][j-1] += 1;
                }
                else
                {
                    mine[i-1][j-1] = '1';
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mine[i][j];
        }
        cout << endl;
    }
    return 0;
}