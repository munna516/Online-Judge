#include <iostream>
using namespace std;
int main()
{
    int test;
    std::cin >> test;
    while (test--)
    {
        int n, m;
        std::cin >> n >> m;
        std::cout << n * m << std::endl;
    }
    return 0;
}