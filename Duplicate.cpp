#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v, v + n);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
