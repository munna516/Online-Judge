#include <iostream>
using namespace std;

int main()
{
    int a, b, p;

    while (cin >> a && a)
    {
        int ar[a + 1];

        for (int i = 0; i < a; ++i)
        {
            cin >> b;
            ar[i + 1] = b;
        }
        cin >> p;

        while (ar[p] != p)
            p = ar[p];

        cout << p << endl;
    }
    return 0;
}