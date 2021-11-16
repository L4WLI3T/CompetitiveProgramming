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
        ll n,i,j;
        cin>>n;
        int a[n],c[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
                c[i]=a[i]&a[i+1];
            else if(i==n-1)
                c[i]=a[i]&a[i-1];
            else
                c[i]=max(a[i]&a[i+1],a[i-1]&a[i]);
        }
        for(i=0;i<n;i++)
            cout<<c[i]<<" ";
        cout<<"\n";
    }
	return 0;
}