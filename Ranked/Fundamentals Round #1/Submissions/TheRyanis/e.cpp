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
