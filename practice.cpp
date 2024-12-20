#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> v(n);
    v[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        v[i] = v[i - 1] + a[i];
    }
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}
