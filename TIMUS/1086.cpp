#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1000005
void Seiveprime(vector<int> &primes)
{
    bool isprime[MAX_SIZE];
    for (int p = 2; p * p < MAX_SIZE; p++)
    {
        if (isprime[p] == false)
        {
            for (int i = p * p; i < MAX_SIZE; i += p)
                isprime[i] = true;
        }
    }
    for (int p = 2; p < MAX_SIZE; p++)
        if (isprime[p] == false)
            primes.push_back(p);
}

int main()
{
    int t;
    cin >> t;
    vector<int> primes;
    Seiveprime(primes);
    while (t--)
    {
        int n;
        cin >> n;
        cout << primes[n - 1] << endl;
    }
    return 0;
}