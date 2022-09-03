/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1010   ***/

#include <stdio.h>
int main()
{
  int product_1_code, product_1_unit, product_2_code, product_2_unit;
  float product_1_price, product_2_price, total;
  scanf("%d%d%f%d%d%f", &product_1_code, &product_1_unit, &product_1_price, &product_2_code, &product_2_unit, &product_2_price);
  total = (product_1_unit * product_1_price) + (product_2_unit * product_2_price);
  printf("VALOR A PAGAR: R$ %.2f\n", total);

  return 0;
}