#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define arr array
#define inf int(1e9)
int x, y;
void solve() {
	int a;
	cin>>a;
	
	if(a==5)
		x++;
	
	if(a==7)
		y++;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	int tt;
	cin>>tt;
	
	while(tt--) {
		solve();
	}
	cout<<x<<" "<<y<<"\n";
	return 0;
}
