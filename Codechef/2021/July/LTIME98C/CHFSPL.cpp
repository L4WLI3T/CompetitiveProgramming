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
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<max(max(a+b,b+c),c+a)<<"\n";
            
        
    }
	return 0;
}
