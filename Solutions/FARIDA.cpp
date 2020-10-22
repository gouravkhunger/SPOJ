// https://www.spoj.com/problems/FARIDA/
// FARIDA - Princess Farida
// File Creation Date: 22-Oct-2020
// Author: Lucas Pavanelli (https://github.com/pavalucas)

#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  cin >> test;
  for (int t = 1; t <= test; t++) {
    int n;
    cin >> n;
    if (n == 0) {
      cout << "Case " << t << ": 0"<< '\n';
      continue;
    }
    long long result = 0;
    vector<long long> monsters(n);
    vector<long long> dp(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> monsters[i];
    }
    dp[0] = monsters[0];
    result = dp[0];

    for (int i = 1; i < n; i++) {
      dp[i] = max(monsters[i], dp[i-1]);
      if (i - 2 >= 0) {
        dp[i] = max(dp[i], dp[i-2] + monsters[i]);
      }
      result = max(dp[i], result);
    }
    cout << "Case " << t << ": " << result << '\n';
  }
  return 0;
}