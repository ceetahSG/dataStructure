#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (auto c : s)
        {
            if (!st.empty())
            {

                if (st.top() == '0' && c == '1')
                {
                    st.pop();
                    continue;
                }
                if (st.top() == '1' && c == '0')
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