#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    *p = 23;

    cout << "in fun" << *p << endl;
}

int main()
{
    int *p;
    int x = 12;
    p = &x;

    fun(p);

    cout << "in main" << *p << endl;

    return 0;
}
