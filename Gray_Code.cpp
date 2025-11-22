//https://cses.fi/problemset/task/2205
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n; cin >> n;
    vector<string> res;
    res.push_back("");

    for (int i = 0; i < n; i++)
    {
        int sz = res.size();
        for (int j = sz - 1; j >= 0; j--)
        {
            res.push_back(res[j]);
        }
        
        sz = res.size();
        for (int j = 0; j < sz; j++)
        {
            if (j < sz / 2)
            {
                res[j] = "0" + res[j];
            }
            else
            {
                res[j] = "1" + res[j];
            }
        }
    }

    for (string s : res)
    {
        cout << s << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

