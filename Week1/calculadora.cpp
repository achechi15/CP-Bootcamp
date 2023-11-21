#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, d;
    char o;
    cin >> n >> o >> d;
    if (o == '+')
    {
        cout << n + d << endl;
    }
    else if (o == '-')
    {
        cout << n - d << endl;
    }
    else if (o == '*')
    {
        cout << n * d << endl;
    }
    else if (o == '/')
    {
        if (d == 0)
        {
            cout << "ERROR" << endl;
        }
        else
        {
            float x = n, r = d;
            printf("%.2lf", x / r);
        }
    }
    return 0;
}