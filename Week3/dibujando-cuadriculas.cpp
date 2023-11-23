#include <bits/stdc++.h>

using namespace std;

void printHead()
{
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            cout << "+";
        }
        cout << "-";
        if (i == 2)
        {
            cout << "+";
        }
    }
}

void printHead2()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "-";
        if (i == 2)
        {
            cout << "+";
        }
    }

}

void printBody()
{
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            cout << "|";
        }
        cout << " ";
        if (i == 2)
        {
            cout << "|";
        }
    }
}

void printBody2()
{
    for (int i = 0; i < 3; i++)
    {
        cout << " ";
        if (i == 2)
        {
            cout << "|";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int aux =  3*n + (n+1);
    for (int i = 0; i < aux; i++)
    {
        if (i % 4 == 0)
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (flag == true)
                {
                    printHead();
                    flag = false;
                }
                else
                {
                    printHead2();
                }
                
            }
            cout << endl;
        }
        else
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (flag == true)
                {
                    printBody();
                    flag = false;
                }
                else
                {
                    printBody2();
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}