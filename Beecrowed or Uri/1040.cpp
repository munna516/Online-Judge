/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1040   ***/

#include <iostream>
#include <iomanip>
using namespace std;
void solve(double m)
{
  double n, a;
  cin >> n;
  cout << fixed << setprecision(1);
  cout << "Nota do exame: " << n << endl;
  a = (m + n) / 2;
  if (a >= 5.0)
    cout << "Aluno aprovado." << endl;
  else if (a <= 4.9)
    cout << "Aluno reprovado." << endl;

  cout << "Media final: " << a << endl;
}
int main()
{
  double a, b, c, d, x;
  cin >> a >> b >> c >> d;
  cout << fixed << setprecision(1);
  x = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / (10);
  cout<<"Media: "<<x<<endl;
  if (x >= 7.0)
    cout << "Aluno aprovado." << endl;
  else if (x < 5.0)
    cout << "Aluno reprovado." << endl;
  else if (x >= 5.0 && x <= 6.9)
  {
    cout << "Aluno em exame." << endl;
    solve(x);
  }

  return 0;
}