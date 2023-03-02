
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long a, b;

    while (1)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        long count = 0, c = 0;
        while (1)
        {
            int x = a % 10;
            int y = b % 10;
            a = a / 10;
            b = b / 10;
            if ((x + y + c) >= 10)
            {
                count++;
                c = 1;
            }
            else
                c = 0;
            if (a == 0 && b == 0)
                break;
        }
        if (count == 0)
            cout << "No carry operation." << endl;
        else if (count == 1)
            cout << "1 carry operation." << endl;
        else
            cout << count << " carry operations." << endl;
    }

    return 0;
}