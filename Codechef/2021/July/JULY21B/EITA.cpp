#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll d,x,y,z;
        cin>>d>>x>>y>>z;
        cout<<max(7*x,y*d+z*(7-d))<<"\n";
    }
	return 0;
}
