#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[8] = {1, 2, 3, 2, 1, 5, 4, 2};
    vector<int> v(a, a + 8);
    // v.pop_back();
    // v.push_back(1);
    vector<int> v2 = {100, 200, 300};
    // v.insert(v.begin() + 3, v2.begin(), v2.end());
    // v.erase(v.begin() + 1, v.begin() + 4);
    replace(v.begin(), v.begin() + 8, 2, 100);
    auto it = find(v.begin(), v.end(), 100);
    if (it == v.end())
    {
        cout << "NOt found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
