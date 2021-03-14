# blueshark

**Final Standing:** N/A

# Solutions

## Problem A - Simple Maths (Accepted)

```cpp
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
```

## Problem B - Counting Students (Accepted)

```cpp
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


```

## Problem C - Voting (Accepted)

```cpp
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


```

## Problem D - Bad Hash (Accepted)

```cpp
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


```

## Problem E - Calculator Plus Plus (Accepted)

```cpp
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
```
