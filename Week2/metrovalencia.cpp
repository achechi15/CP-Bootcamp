#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max = -10000, min = 100000;
    cin>>n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        if (arr1[i] > max)
        {
            max = arr1[i];
        }
        if (arr1[i] < min)
        {
            min = arr1[i];
        }
    }
    cout << min << " " << max << endl;
    return 0;
}