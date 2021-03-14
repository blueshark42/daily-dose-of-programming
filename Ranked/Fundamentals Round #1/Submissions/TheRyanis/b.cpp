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