#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll d,d1,p,q,n,dif,sum;
        cin>>d>>d1>>p>>q;
        //cout<<d1*p+(d/d1)*(q)<<"\n";
        n=d/d1;
        dif=d-n*d1;
        sum=d1*(n*p+((n*(n-1))/2)*q)+dif*(p+n*q);
        cout<<sum<<"\n";
    }
	return 0;
}
