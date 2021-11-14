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
        ll n,p,x,y,i,ct=0,k;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a + n, greater<int>());
        for(i=0;i<n;i++)
            if(a[i]>=a[k-1])
                ct++;
        cout<<ct<<"\n";
        
    }
	return 0;
}