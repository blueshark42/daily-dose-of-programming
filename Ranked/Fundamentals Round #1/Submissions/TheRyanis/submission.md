# TheRyanis (Contestant)

**Final Standing:** 1st

# Solutions

## Problem A - Simple Maths (Accepted)

```cpp
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {

    int a,b,c,d,e,f;

    cin >>a>>b>>c>>d>>e;

    f = (a+b)/((e-d)*d)-c;
    cout << f;

    return 0;
}
```

## Problem B - Counting Students (Accepted)

```cpp
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {

    int a[35];
    int t;
    cin >> t;
    int boys=0, girls=0;
    for (int i = 0; i<t;i++)
    {
        cin >> a[i];
    }
    for (int j=0;j<t;j++)
    {
        if(a[j]==7)
        {
            boys++;
        }
        else{
            girls++;
        }

    }
    cout << boys << "   " << girls;
    return 0;
}
```

## Problem C - Voting (Not Submitted)

## Problem D - Bad Hash (Accepted)

```cpp
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main() {
    int sum = 0;
    int a[1000];
    int t;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    a[0] = a[0] + 1;
    for(int j=1;j<t;j++)
    {
        a[j] += j + 1;
    }
    for(int z=0;z<t;z++)
    cout << a[z] << " ";

    return 0;
}
```

## Problem E - Calculator Plus Plus (Failed, Output: "52")

```cpp
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main() {
    int i=0;
    int sum=0;
    int a[1000];
    int t;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int j=0; j<t;j++)
    {
            if(a[j] == 100){
                a[j] = a[j-1] + a[j+1];
            }
            if(a[j] == 200){
                a[j] =  a[j-1] - a[j+1];
            }
            if(a[j] == 300){
                a[j] = a[j-1] * a[j+1];
            }
            if(a[j] == 400){
                a[j] =  a[j]-1 / a[j]+1;
            }
    }
    for(int i=0;i<t;i++) {
        if (a[i] % 2 == 0) {
            sum+=a[i];
        }
    }
    cout << sum;
    return 0;
}
```
