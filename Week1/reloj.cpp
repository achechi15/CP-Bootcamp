#include <bits/stdc++.h>

using namespace std;

string format(long long n)
{
    string s;
    int hours = n / 60;
    hours = hours % 24;
    int minutes = n % 60;
    string shours = to_string(hours);
    string sminutes = to_string(minutes);
    if (hours < 10) {shours = "0" + shours;}
    if (minutes < 10) {sminutes = "0" + sminutes;}
    s = shours + ":" + sminutes;
    return s;
}

int main()
{
    long long m;
    long long actual = 720;
    cin >> m;
    actual += m;
    cout << format(actual) << endl;
    return 0;
}