#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define arr array
#define inf int(1e9)

void solve() {
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	cout<<((a+b)/((e-d)*d)-c)<<"\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
	
	return 0;
}
