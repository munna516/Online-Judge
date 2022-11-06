#include <iostream>
using namespace std;
int main()
{
    int k, x, i = 1, t;
    cin >> k >> x;
    int a = k % 10;

    while (1)
    {

        if (a == x)
        {
            cout << i << endl;
            break;
        }
        else
        {
            t = k * i;
            if ((t % 10 == 0) || ((t - x) % 10 == 0))
            {
                cout << i << endl;
                break;
            }
        }
        ++i;
    }

    return 0;
}