#include <iostream>
using namespace std;
int main()
{
    int n, a, count1 = 0, count2 = 0, b;
    cin >> n;
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (ary[i - 1] < ary[i])
        {
            a = ary[i - 1];
            ary[i - 1] = ary[i];
            ary[i] = a;
            count1++;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (ary[i - 1] < ary[i])
        {
            b = ary[i - 1];
            ary[i - 1] = ary[i];
            ary[i] = b;
            count2++;
        }
    }
    cout << count1 + count2 << endl;
    return 0;
}