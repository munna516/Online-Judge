#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    do
    {
        cin >> a;
        if (a != 42 && a < 100 && a > (-100))
            cout << a << "\n";
    } while (a != 42 && a < 100 && a > (-100));
    return 0;
}
