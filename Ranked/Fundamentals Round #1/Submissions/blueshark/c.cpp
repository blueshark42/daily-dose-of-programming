#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define arr array
#define inf int(1e9)

void solve() {
	int a, ans=0;
	for(int i=0;i<3;++i) {
		cin>>a;
		ans+=a==1?1:0;
	}
	cout<<(ans>1?"FIRST":"ZERO")<<"\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	int tt;
	cin>>tt;
	
	while(tt--) {
		solve();
	}
	
	return 0;
}
