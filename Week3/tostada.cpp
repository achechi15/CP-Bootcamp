#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr1[n][n];
    bool isEmpty = true, isDifferent = false; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
            if (arr1[i][j] == '#')
            {
                isEmpty = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char aux;
            cin >> aux;
            if (aux != arr1[i][j])
            {
                isDifferent = true;
            }
        }
    }
    if (isEmpty)
    {
        cout << "NO LLEVABA MERMELADA" << endl;
    }
    else if (isDifferent)
    {
        cout << "TRAGEDIA" << endl;
    }
    else
    {
        cout << "HA HABIDO SUERTE" << endl;
    }

    return 0;
}