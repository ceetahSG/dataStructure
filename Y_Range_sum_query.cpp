#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n), v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v2[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        v2[i] = v2[i - 1] + v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long int sum;
        if (l == 0)
        {
            sum = v2[r];
        }
        else
        {
            sum = v2[r] - v2[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}
