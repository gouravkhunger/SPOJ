// https://www.spoj.com/problems/FARIDA/
// FARIDA - Princess Farida
// File Creation Date: 23-Oct-2020
// Author: Gourav (https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int t;
  cin>>t;  // input test-cases
  for(int i=1;i<=t;i++){
    int n, sum=0; // n-dragons, sum-total money that can be collected
    cin >> n;  // for-each test case, input n
    int arr[n];  // array of money each dragon has
    for(int i=0;i<n;i++){
      cin>>arr[i];  // input money each dragon has

      /*
      trick: money can be collected from alternative dragons only.
      => Collect money only from dragons whose modulo 2 = 0.
      */
      if(i%2==0){
        sum += arr[i];
      }
    }
    cout << "Case " << t << ": " << sum << "\n";  // ouput result
  }
}
