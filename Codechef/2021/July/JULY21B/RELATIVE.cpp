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
        ll g,c;
        cin>>g>>c;
        cout<<(c*c)/(2*g)<<"\n";
    }
	return 0;
}
