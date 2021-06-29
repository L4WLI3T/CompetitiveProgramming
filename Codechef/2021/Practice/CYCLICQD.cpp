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
        ll a,b,c,d; cin>>a>>b>>c>>d;
        if((a+c)==180 && (b+d)==180)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
	return 0;
}
