#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define arr array
#define inf int(1e9)

void solve() {
	int n, a[1000];
	cin>>n;

	for(int i=0;i<n;++i)
		cin>>a[i];

	for(int i=0;i<n;++i) {
		cout<<a[i]+i+1<<" ";
	}
	cout<<"\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
	
	return 0;
}

