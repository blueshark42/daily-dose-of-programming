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