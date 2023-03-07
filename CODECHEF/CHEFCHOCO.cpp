#include <iostream>
using namespace std;
int main()
{
    int test;
    std::cin >> test;
    while (test--)
    {
        int c, x, y;
        std::cin >> c >> x >> y;
        std::cout << (c - x) * y << std::endl;
    }

    return 0;
}