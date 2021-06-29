#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll n,b,a; cin>>n>>a>>b;
        cout<<2*(180+n)-(a+b)<<"\n";
    }
	return 0;
}
