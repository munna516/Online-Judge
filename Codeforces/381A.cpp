#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int n, sum1 = 0, sum2 = 0, f1 = 1;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    while (!vec.empty())
    {
        if (f1 == 1)
        {
            if (*vec.begin() > vec.back())
            {
                sum1 += *vec.begin();
                vec.erase(vec.begin());
            }
            else
            {
                sum1 += vec.back();
                vec.pop_back();
            }
            f1 = 2;
        }
        else
        {
            if (*vec.begin() > vec.back())
            {
                sum2 += *vec.begin();
                vec.erase(vec.begin());
            }
            else
            {
                sum2 += vec.back();
                vec.pop_back();
            }
            f1 = 1;
        }
    }
    cout << sum1 << " " << sum2 << endl;

    return 0;
}
