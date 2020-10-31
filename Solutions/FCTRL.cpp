// https://www.spoj.com/problems/FCTRL/
// FCTRL - Factorial
// File Creation Date: 31-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n,ans = 0;
		cin>>n;
		while(n>=5){
			ans+=n/5;
			n = n/5;
		}
		cout<<ans<<"\n";
	}
	return 0;
}