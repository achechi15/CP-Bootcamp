#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << arr1[i]<< " ";
        }
        else
        {
            cout << arr2[i] << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << arr2[i] << " ";
        }
        else
        {
            cout << arr1[i] << " ";
        }
    }
    return 0;
}