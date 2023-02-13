#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, sum1 = 0, total = 0;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
        total += x;
    }
    sort(vec.begin(), vec.end(), greater<int>());
    for (int i = 0; i < n; i += 2)
    {
        sum1 += vec[i];
    }
    cout << sum1 << " " << total - sum1 << endl;

    return 0;
}
