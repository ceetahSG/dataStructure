#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v(25, 0);
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        v[c - 'a'] += 1;
    }
    for (int i = 0; i < 25; i++)
    {
        if (v[i] > 0)
        {
            char c = 'a' + i;
            cout << c << " : " << v[i] << endl;
        }
    }

    return 0;
}
