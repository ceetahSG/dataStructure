#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // vector<int> v(10, 2);
    // vector<int> V(v);
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v(a, a + 5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
