#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n][m], transpost[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }	
    } 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpost[j][i] = arr1[n -i -1][m -j-1];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transpost[m-i-1][j] << " ";
        }
        cout << endl;
    }
    return 0;
}