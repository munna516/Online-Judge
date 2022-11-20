/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2760   ***/

#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
  char s1[100],s2[100],s3[100];
  gets(s1);
  gets(s2);
  gets(s3);
  cout << s1 << s2 << s3 << endl;
  cout << s2 << s3 << s1 << endl;
  cout << s3 << s1 << s2 << endl;
  cout << s1 << s2 << s3 << endl;

  return 0;
}