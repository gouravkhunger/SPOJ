// https://www.spoj.com/problems/CANDY3/
// CANDY3 - Candy III
// File Creation Date: 24-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin>>t;
  for(int i=0;i<t;i++) {
    long long int n, sum=0;
    cin>>n;
    long long int a[n];
    for(int j=0; j<n; j++) {
      cin>>a[j];
      sum+=a[j]%n;
    }
    if(sum%n==0) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
  }

  return 0;
}
