#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int x, y;
    string s1, s2;

    while (getline(cin, s1) && getline(cin, s2))
    {
        x = s1.size();
        y = s2.size();

        printf("$");
        for (int i = 0; i < x; ++i)
        {
            if ((x - i) % 3 == 0 && i > 0)
                printf(",");
            printf("%c", s1[i]);
        }

        printf(".");
        if (y < 2)
            printf("0");
        for (int i = 0; i < y; ++i)
            printf("%c", s2[i]);
        printf("\n");
    }

    return 0;
}