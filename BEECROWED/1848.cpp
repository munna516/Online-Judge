/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1848   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int scream = 3;
    while (scream--)
    {
        int count = 0;
        string s1;
        getline(cin, s1);

        while (s1 != "caw caw")
        {
            if (s1 == "---")
            {
                count += 0;
            }
            else if (s1 == "--*")
            {
                count += 1;
            }
            else if (s1 == "-*-")
            {
                count += 2;
            }
            else if (s1 == "-**")
            {
                count += 3;
            }
            else if (s1 == "*--")
            {
                count += 4;
            }
            else if (s1 == "*-*")
            {
                count += 5;
            }
            else if (s1 == "**-")
            {
                count += 6;
            }
            else if (s1 == "***")
            {
                count += 7;
            }

            getline(cin, s1);
        }
        cout << count << endl;
    }

    return 0;
}