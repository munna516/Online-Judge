#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        for (auto &it : a)
            cin >> it;
        vector<int> used(n);
        vector<int> p;
        for (int i = 0; i < 2 * n; ++i)
        {
            if (!used[a[i] - 1])
            {
                used[a[i] - 1] = true;
                p.push_back(a[i]);
            }
        }
        for (auto it : p)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}
