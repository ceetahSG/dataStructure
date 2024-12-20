#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int x : v)
    {
        if (x < 0)
        {
            x = 2;
            cout << x << " ";
        }
        else if (x > 0)
        {
            x = 1;
            cout << x << " ";
        }
        else
        {
            cout << x << " ";
        }
    }

    return 0;
}
echo "# dataStructure" >> README.md