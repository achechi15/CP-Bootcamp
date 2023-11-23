#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    // INPUT
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    
    // 
    int p1 = 0, p2 = 0, prev; 
    while (p1 < n && p2 < m)
    {
        if (arr1[p1] == arr2[p2])
        {
            prev = arr1[p1];
            cout << prev << " ";
            while(prev == arr1[p1] && p1 < n)
            {
                p1++;
            }
            while(prev == arr2[p2] && p2 < m)
            {
                p2++;
            }
        }
        else if (arr1[p1] < arr2[p2])
        {
            p1++;
        }
        else
        {
            p2++;
        }
    }
    return 0;
}