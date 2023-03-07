#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;

        int gold = 0;

        if (x != a && x != b)
            gold++;
        if (y != a && y != b)
            gold++;

        cout << gold << endl;
    }

    return 0;
}