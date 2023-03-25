#include <iostream>
using namespace std;
int main()
{
   int test;
   std::cin >> test;
   while (test--)
   {
      int a, b, c;
      std::cin >> a >> b >> c;
      if (a + b + c >= 100 && a >= 10 && b >= 10 && c >= 10)
         std::cout << "PASS" << std::endl;
      else
         std::cout << "FAIL" << std::endl;
   }

   return 0;
}
