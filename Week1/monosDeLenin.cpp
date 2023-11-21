#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, n2, n3;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> n2;
    char arr2[n2];
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    cin >> n3;
    string s[n3];
    for(int i = 0; i < n3; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i]*2 << " ";
    }
    cout << endl;
    for (int i = 0; i < n2; i++) {
        char c = toupper(arr2[i]);
        cout << c << " ";
    }
    cout << endl;
    for (int j = 0; j < n3; j++) {
        string xD = s[j];
        for(int i = 0; i < xD.size(); i++) {
            if (xD[i] == 'a' || xD[i] == 'e' || xD[i] == 'i' || xD[i] == 'o' || xD[i] == 'u' || xD[i] == 'A' || xD[i] == 'E' || xD[i] == 'O' || xD[i] == 'U' || xD[i] == 'I')
            {
                xD[i] = '0';
            }
        }
        s[j] = xD;
    }
    for (int i = 0; i < n3; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}