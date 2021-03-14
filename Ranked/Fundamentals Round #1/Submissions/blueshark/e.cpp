#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define arr array
#define inf int(1e9)

void solve() {
	int n, a[1000], ans;
	cin>>n;

	for(int i=0;i<n;++i)
		cin>>a[i];

	ans=a[0];
	for(int i=1;i<n-1;i+=2) {
		if (a[i]==100) {
			ans+=a[i+1];
		} else if(a[i]==200) {
			ans-=a[i+1];
		} else if(a[i]==300) {
			ans*=a[i+1];
		} else if(a[i]==400) {
			ans/=a[i+1];
		}
	}
	cout<<ans<<"\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();	
	return 0;
}
