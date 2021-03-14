#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {

    int a,b,c,d,e,f;

    cin >>a>>b>>c>>d>>e;

    f = (a+b)/((d-c)*d)-c;
    cout << f;

    return 0;
}