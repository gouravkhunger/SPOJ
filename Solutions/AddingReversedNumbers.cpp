#include "bits/stdc++.h"
using namespace std;
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define sz(x)             (int)((x).size())
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define v                 vector<int>



const long long INF=1e18;


const int N=0;
int reverse(int x){
	int n=x;
	int rev=0,n1=0;
	while(n>0){
		n1=n%10;
		rev=rev*10+n1;
		n=n/10;
	}
	return rev;
}
void solve(){
	int a,b;
	cin>>a>>b;
	int result=reverse(a)+reverse(b);
	cout<<reverse(result)<<endl;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,i=1;
	cin>>t;
	while(t--){
		solve();
	}
}
