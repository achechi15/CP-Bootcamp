#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m = 0;
    float suma = 0;
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] > 4.99)
        {
            m++;
            suma += arr[i];
        }
    }
    float xD = m;
    printf("%.2lf", suma / xD);
    return 0;
}