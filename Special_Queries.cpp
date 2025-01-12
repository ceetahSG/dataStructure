#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    queue<string> q;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1 && q.empty())
        {
            cout << "Invalid" << endl;
        }
        else if (x == 1 && !q.empty())
        {
            cout << q.front() << endl;
            q.pop();
        }
        else
        {
            string s;
            cin >> s;
            q.push(s);
        }
    }
    return 0;
}