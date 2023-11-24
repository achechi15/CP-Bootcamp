#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char arr1[n][m];
    char arr2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr2[i][j] = '.';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }   
    // checkear tablero
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i][j] == '#')
            {
                // change row
                for (int k = 0; k < m; k++)
                {
                    arr2[i][k] = '#';
                }
                // change column
                for (int k = 0; k < n; k++)
                {
                    arr2[k][j] = '#';
                }
            }
        }
    }
    // Imprimir mesa
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr2[i][j];
        }
        cout << endl;
    }
    return 0;
}