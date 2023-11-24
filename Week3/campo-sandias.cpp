#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int campo[n][m];
    // Input of the field
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> campo[i][j];
        }
    }

    // check the sum of the field, in specific the row
    int sum = 0; int max = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += campo[i][j];
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    // check the sum of the field, in specific the column
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += campo[j][i];
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max << endl;
    return 0;
}
