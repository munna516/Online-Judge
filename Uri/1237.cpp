#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    while (getline(cin, s2))
    {
        int s1_length = 0, s2_length = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            for (int j = 0; j < s2.length(); j++)
            {
                if (s2[j] == s1[i])

                {
                    s2_length = 0;
                    for (int k = j, l = i; k < s2.length(), l < s1.length(); k++, l++)
                    {
                        if (s2[k] != s1[l])
                            break;
                        s2_length++;
                    }

                    if (s2_length > s1_length)
                    {
                        s1_length = s2_length;
                    }
                }
            }
        }
        cout << s1_length << endl;
        getline(cin, s1);
    }
}