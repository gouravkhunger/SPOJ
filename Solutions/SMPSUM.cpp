// https://www.spoj.com/problems/SMPSUM/
// SMPSUM - Iterated sums
// File Creation Date: 23-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int a, b, sum = 0;
  cin >> a >> b;

  for(int i = a; i <= b; ++i){
    sum += (i*i);
  }
  cout<<sum;
}
