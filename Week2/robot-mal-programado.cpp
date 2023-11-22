#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long num, count = 0;
    while(cin >> num)
    {
        if (num != 0)
        {
            count += num;
        }
        cout << count << " ";
    }
    cout << endl;
    return 0;
}