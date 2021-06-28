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
        ll a,b,x;
        cin>>a>>b>>x;
        cout<<(b-a)/x<<"\n";
    }
	return 0;
}
