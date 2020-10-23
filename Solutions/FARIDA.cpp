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
      // if there are no monsters, just return 0
      cout << "Case " << t << ": 0"<< '\n';
      continue;
    }
    long long result = 0;
    vector<long long> monsters(n);

    // dp[i] -> answer using first i monsters
    vector<long long> dp(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> monsters[i];
    }
    // base case: initiliaze dp with value of the first monster
    dp[0] = monsters[0];
    result = dp[0];

    for (int i = 1; i < n; i++) {
      // recursive case:
      // maximum between using only monster[i] and the last known answer
      dp[i] = max(monsters[i], dp[i-1]);
      if (i - 2 >= 0) {
        // maximum between using value already stored and dp[i-2] + monsters[i]
        dp[i] = max(dp[i], dp[i-2] + monsters[i]);
      }
      // store in result maximum value for every dp[i]
      result = max(dp[i], result);
    }
    cout << "Case " << t << ": " << result << '\n';
  }
  return 0;
}
