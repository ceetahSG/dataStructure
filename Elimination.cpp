#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (auto c : s)
        {
            if (!st.empty())
            {
                if (st.top() == '0' && c == '1')
                {
                    st.pop();
                    continue;
                }
            }
            st.push(c);
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}