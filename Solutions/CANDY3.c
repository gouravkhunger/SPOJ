// https://www.spoj.com/problems/CANDY3/
// Candy III
// File creation date: 23-Oct-2020
// Author: Trisanu-007(https://github.com/Trisanu-007)

#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--)
  {
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
      scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
      sum = sum + arr[i] % n;
    }
    if (sum % n == 0)
    printf("YES\n");
    else
    printf("NO\n");
  }
  return 0;
}
