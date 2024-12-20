#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = n;
    for (int i = 1; i < (n + 1) / 2; i++)
    {
        if (i >= 2)
        {
            for (int j = 2; j <= i; j++)
            {
                cout << " ";
            }
        }
        cout << '\\';

        int k;
        for (k = i + 1; k < t; k++)
        {
            cout << " ";
        }
        k++;
        t--;

        cout << "/" << endl;
    }
    for (int i = 0; i < n / 2; i++)
    {
        cout << " ";
    }
    cout << 'X' << endl;
    t = (n + 1) / 2;

    for (int i = n / 2; i > 0; i--)
    {
        if (i >= 1)
        {
            for (int j = 1; j < i; j++)
            {
                cout << " ";
            }
        }
        cout << '/';

        for (int k = i + 1; k <= t; k++)
        {
            cout << ' ';
        }
        t++;
        cout << '\\' << endl;
    }

    return 0;
}
