#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    while (q--)
    {
        int x;
        cin >> x;
        int l = 0;
        int r = n - 1;
        bool check = false;
        while (l <= r)
        {

            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                check = true;
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (check)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
